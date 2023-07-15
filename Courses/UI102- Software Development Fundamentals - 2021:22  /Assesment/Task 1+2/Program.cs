 /*  
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
    class Program
    {
        //Global Reference of all storage space
        static int[] global_Storage_space = { 232, 241, 324, 216, 221, 298, 334, 212, 235, 324, 264, 141 };

        static void Main(string[] args)
        {
            //An Object instance of a class
            ArrayMethods arraymethods = new ArrayMethods();

            //Class which calls a method to display the array
            ArrayMethods.display_array(global_Storage_space);

            //Class which calls a method to call the highest number
            ArrayMethods.highest_number(global_Storage_space);

            //Class which calls a method to call the average and total space used
            ArrayMethods.average_and_total_space(global_Storage_space);

            //Class which calls a method to call the number of files used
            ArrayMethods.number_of_files(global_Storage_space);
        }

        

    }
        
}

