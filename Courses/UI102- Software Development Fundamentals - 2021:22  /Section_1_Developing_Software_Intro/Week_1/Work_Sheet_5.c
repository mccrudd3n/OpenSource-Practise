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
            Console.WriteLine($"In 10 years you will be " + (age + 10) + " years old!");
        }

        static void SuperHeroMessage()
        {
            string hero;
            Console.WriteLine("Whats your Super Hero Name?");
            hero = Convert.ToString(Console.ReadLine());
            Console.WriteLine($"Interesting Choice Mr " + hero + " hero");
        }

        static void HeightMessage()
        {
            double height = 0.0;
            Console.WriteLine("and how tall are you in Meters?");
            height = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine($"Nice " + height + " meters");
        }

        static void Main(string[] args)
        {
            WelcomeMessage();
            AgeMessage();
            SuperHeroMessage();
            HeightMessage();
        }
       
    }
}
