/* Write a program that allows the user to enter a number
 * and then will display the multiplication table for that
 * number up to 12 using a for loop.
*/

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {
            
            int in_Num; //Input Number

            //User Input
            Console.WriteLine("Enter a number and press RETURN: ");
            in_Num = Convert.ToInt32(Console.ReadLine());

            //User Input Test
            //Console.WriteLine(in_Num);
            Console.WriteLine($"Multiplication Table for {in_Num} are: ");
            for (int i =0; i <= 12; i++)
            {
                Console.WriteLine($"{i} * {in_Num} = {i * in_Num} ");
            }
        }
    }
}
