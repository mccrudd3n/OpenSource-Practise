/* 
Create a program which will display the factors of a user supplied number (ie 12). Factors are
the numbers which divide into a single number
For example factors of 12 are 1,2,3,4 and 6

*/

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {
            
            //User Input number
            Console.WriteLine("Enter a Number: ");
            int input_Number = Convert.ToInt32(Console.ReadLine());

            //Input Test
            //Console.WriteLine(input_Number);

            for (int i = 1 ; i < input_Number; i++)
            {
                if (input_Number % i == 0)
                {
                    Console.WriteLine($"{i} is a factor of {input_Number}");
                }
            }
        }
    }
}
