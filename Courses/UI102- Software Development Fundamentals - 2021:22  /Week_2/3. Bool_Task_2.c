using System;

namespace Worksheet1
{
    class Program
    {
        static void Main(string[] args)
        {
            //Declaring Vars
            //float num_One = 0.0f;
            //float num_Two = 0.0f;

            Console.WriteLine("Enter number 1: ");
            float num_One = Single.Parse(Console.ReadLine());

            Console.WriteLine("Enter Number 2: ");
            float num_Two = Single.Parse(Console.ReadLine());

            bool sum1 = num_One >= 10;
            bool sum2 = num_Two >= 10;
            Console.WriteLine("1) Is " + num_One + " greater than 10 " + sum1);
            Console.WriteLine("2) Is " + num_Two + " greater than 10 " + sum2);
        }
    }
}
