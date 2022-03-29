/* 
Write a Welcome() method which will display a personalised welcome message to the user
when the program starts.

The Welcome() method should prompt the user for their name,
store this as a variable and then display a welcome message. Call this method from the
Main() method.

For the above program think about where you asked the user to input their name. If the
users name is stored in a variable only in the Welcome() method then it means it won’t be
accessible to the rest of the program.

Change the program so that the user’s name can be stored as a variable and used elsewhere
in the program. (NOTE: There are a number of ways this can be done. What do you think is
the best way?)
 */

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Username");
            string userName = Console.ReadLine();
            Welcome(userName);

        }

        static void Welcome(string userName)
        {
            Console.WriteLine($"Welcome {userName}");
        }
    }
}