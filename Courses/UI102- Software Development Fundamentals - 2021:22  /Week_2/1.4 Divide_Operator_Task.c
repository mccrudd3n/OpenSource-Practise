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

            float sum = num_One / num_Two;
            Console.WriteLine(num_One + " / " + num_Two + " = " + sum);

        }
    }
}
