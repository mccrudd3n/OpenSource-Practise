using System;

namespace Worksheet1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter number 1: ");
            float num_One = Single.Parse(Console.ReadLine());

            double sum = Math.Ceiling(num_One);

            Console.WriteLine("Rounded number is " + sum);
        }
    }
}
