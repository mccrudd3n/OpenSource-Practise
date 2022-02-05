using System;

namespace Worksheet1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter your UserName: ");
            string username = Console.ReadLine();
            Console.WriteLine("Enter Your Age: ");

            string s_age = Console.ReadLine();
            int age = Convert.ToInt32(s_age);

            Console.WriteLine("Hello " + username);
            Console.WriteLine("In ten years you will be " + (age + 10));
        }
    }
}