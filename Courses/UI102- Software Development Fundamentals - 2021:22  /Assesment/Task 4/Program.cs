/*  Name: John McCrudden
 *  Student Number: 13000236
 * 
 * This code solves Outcome 4 - Array Sorter
 * 
 * This source code uses 3 methods which calls each of the methods
 *  - An initial method is called to allow the user to enter the array value which is then retured to the Main
 *  - A second method then uses the entered array value and sorts them into order from the fastes to the slowet then returns it to the main
 *  - A third method then uses the sorted array to view them out to the Console
 *
 *
 * The source code has been fully commented through out sourcecode
 */


using System;

namespace _13000236_Task_4
{
    class Program
    {
        static void Main(string[] args)
        {
            //Method which allows the user to enter the arry values and returnes it into main
            double[] arrayData = user_input_array();

            //Method which accepts the user input speeds as an input parameter and sorts them in order
            double[] sortedData = to_sort_array(arrayData);

            //Method which displays the sorted array
            display_array(arrayData);
        }


        static double[] user_input_array()
        {
            //Declerations of an array with 8 elements as well as a counter to inform the user the current array input element
            double[] arrayData = new double[8];
            int counter = 1;

            //A For-loop which asks the user 8 times to input a specific record for each element on the array.
            for (int i=0; i < 8; i++)
            {
                Console.WriteLine("Input element " + counter);
                arrayData[i] = Convert.ToDouble(Console.ReadLine());
                counter++;
            }

            //Returning the array data back to Main
            return arrayData;
        }

        static double[] to_sort_array(double[] arrayData)
        {
            //Declerations for the For loop
            double[] array = arrayData;
            double minValue = 0;
            int minIndex;
            double temp;

            //For loop which check through the array length 
            for (int i = 0; i < array.Length; i++)
            {
                minValue = array[i];
                minIndex = i;

                //A nested for loop which check through the array element if the current array element is greater than the minimum value, if it is them to use the current array value as the new minimum value and to swap the minimum index
                for (int j = i; j < array.Length; j++)
                {
                    if (array[j] < minValue)
                    {
                        minValue = array[j];
                        minIndex = j;
                    }
                }

                //if statement to check if the Minimum value array position is greater than the current array element being inspected, if it is then to switch it using a temporary verable
                if (minValue < array[i])
                {
                    temp = array[i];
                    array[i] = array[minIndex];
                    array[minIndex] = temp;
                }
            }

            //return the array to the main
            return array;
        }


        static void display_array(double[] arrayData)
        {
            //String output to inform the user what is being displayed
            String output = "Array Data from fastest to slowest: ";

            //For Loop which loops through the array and presents it with spaces in between for the user interface (UI) purposes
            for (int i = 0; i < arrayData.Length; i++)
            {
                output += arrayData[i] + " ";
            }
            //Output results to console
            Console.WriteLine(output);
            
        }
    }
}

