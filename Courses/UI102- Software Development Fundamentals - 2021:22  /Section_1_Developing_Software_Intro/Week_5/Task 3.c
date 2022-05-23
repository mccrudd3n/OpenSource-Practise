/* 
You are writing a small part of a larger email program. The program gives the user three
options: S – Send, R – Receive and D – Delete. You have been tasked with writing code to
validate user input.
The program must welcome the user and display the three possible options. The user must
then enter either of the following letters: ‘S’ , ‘R’ or ‘D’. If the user enters anything other
than these three letters they must be prompted to try again.
 
 */

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Welcome, Please Enter Username: ");
            string user = Console.ReadLine();
            Console.WriteLine("Would you like to Send(S), Receive(R) or Delete(D) an email?");
            Console.WriteLine("(E) to Exit");
            string selection = Console.ReadLine();
            while (selection != "E" || selection != "e")
            {
                Console.WriteLine("Please selecta valid option -> Send(S), Receive(R) or Delete(D)");
                Console.WriteLine("(E) to Exit");
                string selection2 = Console.ReadLine();
                selection = selection2;

                if (selection == "S" || selection == "s")
                {
                    Console.WriteLine("Sending Email");
                    break;
                }
                else if (selection == "R" || selection == "r")
                {
                    Console.WriteLine("Reciving Email");
                    break;

                }
                else if (selection == "D" || selection == "d")
                {
                    Console.WriteLine("Deleting Email");
                    break;

                }
                else
                    Console.WriteLine("Please selecta valid option -> Send(S), Receive(R) or Delete(D)");
            }

        }
    }
}
