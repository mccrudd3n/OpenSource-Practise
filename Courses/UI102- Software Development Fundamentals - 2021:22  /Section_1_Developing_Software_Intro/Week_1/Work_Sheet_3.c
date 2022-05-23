using System;

namespace Hello_World
{
    class Program
    {
        static void Main(string[] args)
        {

            string firstName = "John";
            string secondName = "Jones";
            string superHeroName = "Martian Manhunter";
            int age = 52;
            float heightInMetres = 1.85f;

            Console.WriteLine("DATAFILE");
            Console.WriteLine($"Name:       {firstName} \"{superHeroName}\" {secondName}");
            Console.WriteLine($"Age:        {age}");
            Console.WriteLine($"Height:     {heightInMetres}");
                
        }
    }
}