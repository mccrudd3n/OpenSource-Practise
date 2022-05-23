/* 
Write a Welcome() method which will display a personalised welcome message to the user
when the program starts.

The Welcome() method should prompt the user for their name,
store this as a variable and then display a welcome message. Call this method from the
Main() method.

 */

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {

            Welcome();

        }

        static void Welcome()
        {
            Console.WriteLine("Enter Username");
            string userName = Console.ReadLine();
            Console.WriteLine($"Welcome {userName}");
        }
    }
}
