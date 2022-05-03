using System;

namespace Hello_World
{
    class Program
    {
        static void WelcomeMessage(string name)
        {
            Console.WriteLine($"Welcome," + name);  
        }


        static void Main(string[] args)
        {
            Console.WriteLine("Enter your Name");

            string name;
            name = Convert.ToString(Console.ReadLine());
            WelcomeMessage(name);


        }

       
    }
}
