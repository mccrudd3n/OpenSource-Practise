#!/bin/bash

# Define configuration file path
config_file="$HOME/.ssh_key_exchange_config"

# Define all remote server parameters with default values
default_remote_server="REMOTE_SERVER_IP"
default_remote_username="REMOTE_USERNAME"
default_remote_ssh_key_location="/home/SERVER_USER_NAME/.ssh/authorized_keys"
default_host_ssh_key_location="$HOME/PATH/TO/SSHKEY"

# Define key generation parameters
default_key_algorithm="ed25519"
default_key_size="4096"

# Function to test SSH connection
test_ssh_connection() {
    ssh -i "$1" "$2@$3" exit
    return $?
}

# Function to display usage instructions
display_usage() {
    echo "Usage: $0 [-k <local_ssh_key_location>] [-c <config_file>] [-r]"
    echo "Options:"
    echo "  -k <local_ssh_key_location> : Specify the local host SSH key file location"
    echo "                                Default: $default_host_ssh_key_location"
    echo "  -c <config_file>             : Specify the configuration file location"
    echo "                                Default: $config_file"
    echo "  -r                           : Reset the configuration file and use default values"
    echo "  -h                           : Display this usage information"
}

# Function to write configuration variables to the file
write_config_variables() {
    echo "local_ssh_key_location=$local_ssh_key_location" > "$config_file"
}

# Function to read configuration variables from the file
read_config_variables() {
    source "$config_file"
}

# Function to check if a file exists
file_exists() {
    if [ -e "$1" ]; then
        return 0 # File exists
    else
        return 1 # File does not exist
    fi
}

# Function to change the name of the file by appending a timestamp
change_file_name() {
    file_path=$1
    timestamp=$(date +"%Y%m%d%H%M%S")
    new_file_path="${file_path}.${timestamp}"
    mv "$file_path" "$new_file_path"
    echo "$new_file_path"
}

# Parse command-line arguments
while getopts ":k:c:rh" opt; do
    case $opt in
        k)
            local_ssh_key_location=$OPTARG
            ;;
        c)
            config_file=$OPTARG
            ;;
        r)
            rm -f "$config_file"
            ;;
        h)
            display_usage
            exit 0
            ;;
        \?)
            echo "Invalid option: -$OPTARG"
            display_usage
            exit 1
            ;;
    esac
done

# Check if the configuration file exists and read variables from it
if [ -f "$config_file" ]; then
    read_config_variables
fi

# If the local SSH key location is not provided, use the one from the configuration file or the default value
local_ssh_key_location=${local_ssh_key_location:-$default_host_ssh_key_location}

# Check if the new key file already exists
if file_exists "$local_ssh_key_location"; then
    echo "Warning: $local_ssh_key_location already exists. Changing the name..."
    local_ssh_key_location=$(change_file_name "$local_ssh_key_location")
    echo "The new key file will be created as: $local_ssh_key_location"
fi

# Generate a new strong key file with a password on the host machine
ssh-keygen -t "$default_key_algorithm" -b "$default_key_size" -f "$local_ssh_key_location"

# Verify the generated key's fingerprint
key_fingerprint=$(ssh-keygen -l -E md5 -f "$local_ssh_key_location.pub" | awk '{print $2}')
echo "Generated key fingerprint: $key_fingerprint"

# Backup the current remote SSH key information
ssh "$default_remote_username@$default_remote_server" "cp $default_remote_ssh_key_location $default_remote_ssh_key_location.backup"

# Copy the new key file to the remote server securely
scp -i "$local_ssh_key_location" "$local_ssh_key_location.pub" "$default_remote_username@$default_remote_server:$default_remote_ssh_key_location.pub"
ssh "$default_remote_username@$default_remote_server" "cat $default_remote_ssh_key_location.pub >> $default_remote_ssh_key_location"

# Remove the uploaded public key file from the remote server
ssh "$default_remote_username@$default_remote_server" "rm $default_remote_ssh_key_location.pub"

# Test new connection with the new SSH public key
if test_ssh_connection "$local_ssh_key_location" "$default_remote_username" "$default_remote_server"; then
    echo "New SSH key exchange successful!"

    # Write configuration variables to the file
    write_config_variables
else
    echo "New SSH key exchange failed. Reverting changes..."
    ssh "$default_remote_username@$default_remote_server" "cp $default_remote_ssh_key_location.backup $default_remote_ssh_key_location"
    echo "Reverted changes. Please check the parameters and try again."
fi
