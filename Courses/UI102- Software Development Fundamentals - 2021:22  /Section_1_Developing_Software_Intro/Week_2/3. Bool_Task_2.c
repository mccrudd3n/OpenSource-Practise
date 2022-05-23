using System;

namespace Hello_World
{
    class Program
    {

        static void GreaterBoolCheck(double input_1, double input_2)
        {
            bool sum1 = input_1 >= 10;
            bool sum2 = input_2 >= 10;
            Console.WriteLine("1) Is " + input_1 + " greater than 10 " + sum1);
            Console.WriteLine("2) Is " + input_2 + " greater than 10 " + sum2);
        }
        
        static void Main(string[] args)
        {
            Console.WriteLine("Enter number 1: ");
            double input_1 = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter Number 2: ");
            double input_2 = Convert.ToDouble(Console.ReadLine());

            GreaterBoolCheck(input_1, input_2);
            
        }
       
    }
}
