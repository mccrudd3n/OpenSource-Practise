/*

Adapt the program so that it asks for the users first name, last name and age separately. It 
should then output. 

->> Welcome firstname lastname. 
->> You are age years old.

*/

using System;

namespace Hello_World
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter your First Name");
            string firstName;
            firstName = Console.ReadLine();

            Console.WriteLine("Enter your Last Name");
            string lastName;
            lastName = Console.ReadLine();

            Console.WriteLine("Enter your Age");
            string s_age;
            s_age = Console.ReadLine();
            int int_age = Convert.ToInt32(s_age);

            Console.WriteLine("Hello " + firstName + " " + lastName + "!");
            Console.WriteLine("You are " + int_age + " years old!");

        }
    }
}