using System;

namespace Week_3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter First Name: ");
            string f_name = Console.ReadLine();

            Console.WriteLine("Enter Second Name: ");
            string s_name = Console.ReadLine();

            Console.WriteLine("Enter Phone Number: ");
            int number = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter Age: ");
            int age = Convert.ToInt32(Console.ReadLine());

            if(age <= 18)
            {
                Console.WriteLine($"{f_name} {s_name}, You must be accompanied by an adult to use the Gym");
            }
            else if (age >= 19 && age < 64)
            {
                Console.WriteLine($"Did you know about our Roller Disco every Thursday night!?");
            }
            else if (age > 65)
            {
                Console.WriteLine($"{f_name} {s_name}, You are eligible for a discount on the bowls green!");
            }


        }
    }
}
