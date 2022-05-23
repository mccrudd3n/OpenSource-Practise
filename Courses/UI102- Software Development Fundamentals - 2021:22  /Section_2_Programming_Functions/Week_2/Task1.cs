using System;
namespace SortingAlgorithms
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] unsortedArray = { 3, 6, 2, 7, 1, 4, 8, 5 };
           
            int[] sortedArray = Sort(unsortedArray);
            String output = "The sorted array is: ";

            for (int i = 0; i < sortedArray.Length; i++)
            {
                output += sortedArray[i] + " ";
            }
            Console.WriteLine(output);
        }
        public static int[] Sort(int[] unsortedArray)
        {
            int[] array = unsortedArray;
            int minValue = 0;
            int minIndex;
            int temp;

            for(int i = 0; i < array.Length; i++)
            {
                minValue = array[i];
                minIndex = i;

                for (int j = i; j < array.Length; j++)
                {
                    if (unsortedArray[j] < minValue)
                    {
                        minValue = array[j];
                        minIndex = j;
                    }
                }

                if (minValue < array[i])
                {
                    temp = array[i];
                    array[i] = unsortedArray[minIndex];
                    array[minIndex] = temp;
                }
            }

            return array;
        }
    }
}