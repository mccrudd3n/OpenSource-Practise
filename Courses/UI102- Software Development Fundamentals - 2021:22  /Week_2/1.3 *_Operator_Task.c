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

        static double SubtractMethod(double input_1, double input_2)
        {

            double total = input_1 - input_2;
            return total;
        }

        static double MultiplyMethod(double input_1, double input_2)
        {

            double total = input_1 * input_2;
            return total;
        }


        static void Operation_section(double input_1, double input_2)
        {
            Console.WriteLine("Select Operation: Addition (a), Subtract (s) or Multiply (m)");
            string input_operator = Console.ReadLine();

            while (input_operator != "a" || input_operator != "s" || input_operator != "m")
            {
                Console.WriteLine("Invalid operator; Addition (a), Subtract (s) or Multiply (m)");
                string input_operator2 = Console.ReadLine();
                input_operator = input_operator2;
            
                if (input_operator == "a")
                {
                    Console.WriteLine($"{input_1} + {input_2} = {AdditionMethod(input_1, input_2)}");
                    break;
                }

                else if (input_operator == "s")
                {
                    Console.WriteLine($"{input_1} + {input_2} = {SubtractMethod(input_1, input_2)}");
                    break;
                }

                else if (input_operator == "m")
                {
                    Console.WriteLine($"{input_1} + {input_2} = {MultiplyMethod(input_1, input_2)}");
                    break;
                }
            }
        }
        
        static void Main(string[] args)
        {
            Console.WriteLine("Enter number 1: ");
            double input_1 = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter Number 2: ");
            double input_2 = Convert.ToDouble(Console.ReadLine());

            Operation_section(input_1, input_2);
        }
       
    }
}
