/* 
 * There are 12 students in a class. You must create an array to store the following 12 names 
and then use a foreach loop to display them on screen.

{ “John”, “Bruce”, “Diana”, “Cassandra”, “Clark”, “Victor”, “Kendra”, “Hal”, “Barry”, 
“Helena”, “Billy”, “Oliver” } 
*/

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {

            string[] class_names = new string[]
            { "John", "Bruc", "Diana", "Cassandra", "Clark", "Victor", "Kendra", "Hal", "Barry", 
"Helena", "Billy", "Oliver" };

            foreach (string name in class_names)
            {
                Console.WriteLine(name);
            }

        }
    }
}
