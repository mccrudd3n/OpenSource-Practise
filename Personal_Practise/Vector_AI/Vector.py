import anki_vector

# Create a Robot object
robot = anki_vector.Robot()

# Connect to the Robot
robot.connect()

# Run your commands
robot.anim.play_animation_trigger("GreetAfterLongTime")
robot.vision.enable_custom_object_detection()

# Disconnect from Vector
robot.disconnect()