/*
Write a simple program which will ask the user to input their name and then display the 
following: 
->> Welcome firstname 
*/

using System;

namespace Hello_World
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter your Name");
            string firstname;
            firstname = Console.ReadLine();
            Console.WriteLine("Welcome " + firstname + "!");

        }
    }
}
