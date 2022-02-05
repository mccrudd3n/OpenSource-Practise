using System;

namespace Hello_World
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter your First Name: ");
            string firstName = Console.ReadLine();
            Console.WriteLine("Enter your Second Name: ");
            string secondName = Console.ReadLine();
            Console.WriteLine("Enter your Super Hero Name: ");
            string superHeroName = Console.ReadLine();
            Console.WriteLine("Enter your Age: ");
            string s_age = Console.ReadLine();
            int age = Convert.ToInt32(s_age);
            Console.WriteLine("Enter your Height: ");
            string s_hieghtInMetres = Console.ReadLine();
            double heightInMetres = Convert.ToDouble(s_hieghtInMetres);

            Console.WriteLine("DATAFILE");
            Console.WriteLine($"Name:       {firstName} \"{superHeroName}\" {secondName}");
            Console.WriteLine($"Age:        {age}");
            Console.WriteLine($"Height:     {heightInMetres}");
                
        }
    }
}