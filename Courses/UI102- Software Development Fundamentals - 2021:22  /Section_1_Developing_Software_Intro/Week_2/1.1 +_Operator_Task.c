using System;

namespace Hello_World
{
    class Program
    {

        static double AdditionMethod(double input_1, double input_2)
        {

            double total = input_1 + input_2;
            return total;
        }


        static void Main(string[] args)
        {
            Console.WriteLine("Enter number 1: ");
            double input_1 = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter Number 2: ");
            double input_2 = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine($"{input_1} + {input_2} = {AdditionMethod(input_1, input_2)}");
        }
       
    }
}
