using System;

namespace Hello_World
{
    class Program
    {
        static void WelcomeMessage()
        {
            string name;
            Console.WriteLine("Whats your name?");
            name = Convert.ToString(Console.ReadLine());
            Console.WriteLine($"Welcome," + name + "!");  
        }

        static void AgeMessage()
        {
            int age = 0;
            Console.WriteLine("How old are you? ");
            age = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine($"Damn! " + age + " years old?");
        }

        static void Main(string[] args)
        {
            WelcomeMessage();
            AgeMessage();
        }