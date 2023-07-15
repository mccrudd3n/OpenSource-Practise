/*  Name: John McCrudden
 *  Student Number: 13000236
 *  
 * 
 * This code completes outcome 3 - Create username
 * 
 * Within the main function, the user is asked for the first and second name which is then stored into a varaible
 * The method is then called with the firstname and secondname as the parameter which is nested within the console output
 * 
 * 
 * The source code has been fully commented through out sourcecode
 */


using System;

namespace _13000236_task3
{
    class Program
    {
        static void Main(string[] args)
        {
            //Console output which asks for the first name
            Console.WriteLine("Enter your First Name: ");
            // Storing the users firstname input into "firstname"
            string firstName = Console.ReadLine();
            //Console output which asks for the second name
            Console.WriteLine("Enter your Second Name: ");
            // Storing the users secondname input into "secondName"
            string secondName = Console.ReadLine();

            //Calls the username method generator with the firstname and secondname as input parameters and returns the username
            Console.WriteLine("Username: " + username_Generator(firstName, secondName));
        }


        //Method which uses substring to select only the specific range for the first name and add on the second as the end result which is then returned to the main function
        private static string username_Generator(string firstName, string secondName)
        {
            string result = firstName.Substring(0,1) + secondName;
            return result;
        }
    }
}

