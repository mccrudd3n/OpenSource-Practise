using System;

namespace Hello_World
{
    class Program
    {

        static void BoolCheck(double input_1, double input_2)
        {
            bool sum = input_1 == input_2;
            Console.WriteLine("Is " + input_1 + " and " + input_2 + " == " + sum);
        }
        
        static void Main(string[] args)
        {
            Console.WriteLine("Enter number 1: ");
            double input_1 = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter Number 2: ");
            double input_2 = Convert.ToDouble(Console.ReadLine());

            BoolCheck(input_1, input_2);
            
        }
       
    }
}