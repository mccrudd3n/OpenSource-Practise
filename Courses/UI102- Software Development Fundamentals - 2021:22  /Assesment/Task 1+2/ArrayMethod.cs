/*  Name: John McCrudden
 *  Student Number: 13000236
 *  
 * 
 * This code consolidates both task 1 and task 2 into one
 * 
 * Within the main function, 4 seperate methods are called from a seperate "ArrayMethods" class.
 * 
 * - display_array: Used to display the Global array to the user
 * - highes_number: Used to display the highest number found with the array to the user
 * - average_and_total_space: Used to display the average and the total space used to the user
 * - number_of_files: Used to display the number of total files to the user.
 * 
 * The source code has been fully commented through out sourcecode
 */

using System;
namespace _13000236_Task1_2
{
    public class ArrayMethods
    {
            public static void display_array(int[] global_Storage_space)
            {
                //String output to inform the user what is being displayed
                String output = "TASK 1:        Global Storage Space: ";

                //For Loop which loops through the array and presents it with spaces in between for the user interface (UI) purposes
                for (int i = 0; i < global_Storage_space.Length; i++)
                {
                 output += global_Storage_space[i] + " ";
                }
                //Output results to console
                Console.WriteLine(output);
            }

            public static void highest_number(int[] global_Storage_space)
            {
                //Declaration 
                int maxValue = global_Storage_space[0];

                //For loop which compares if the max value (declared at Array element 0) is greater than the next array element until it is looped through the full array length
                for (int i = 0; i < global_Storage_space.Length; i++)
                {
                    //if statement which compares if the current max value is greater than the current sorted array element. If it is then to use that value as the new max value 
                    if (maxValue < global_Storage_space[i])
                    {
                        maxValue = global_Storage_space[i];
                    }
                }
                //Print the largest value
                Console.WriteLine("TASK 1:        Largest file: " + maxValue + " MB");
            }

            public static void average_and_total_space(int[] global_Storage_space)
            {

                //Defining the total counter, starting from the array element 0
                int total = global_Storage_space[0];

                //A for loop which counts the total number of all integeres within the array length
                for (int i = 1; i < global_Storage_space.Length; i++)
                {
                    total += global_Storage_space[i];
                }
                //A final calculation which devides the total with the total element length
                int average = total / global_Storage_space.Length;

                //A console output which presents to the user the average storage space used
                Console.WriteLine("TASK 2:        Average storage space used: " + average + " MB");

                //A console output which presents to the total storage space used
                Console.WriteLine("TASK 2:        Total storage space used: " + total + " MB");

            }

            public static void number_of_files(int[] global_Storage_space)
            {
                //Counter starts at 1 since the array count element starts from 0
                int count = 1;

                //A for loop which counts how many element in the array length
                for (int i = 1; i < global_Storage_space.Length; i++)
                {
                    count++;
                }
                //Console output which notifies users on how many files where counted
                Console.WriteLine("TASK 2:        Number of files: " + count);

            }


    }
}
   