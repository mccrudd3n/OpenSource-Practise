/* 
 * There are 12 students in a class. You must create an array to store the following 12 names 
and then use a foreach loop to display them on screen.

{ “John”, “Bruce”, “Diana”, “Cassandra”, “Clark”, “Victor”, “Kendra”, “Hal”, “Barry”, 
“Helena”, “Billy”, “Oliver” }

Adapt the program above so that the user is able to enter the 12 names themselves. Once all
12 names have been entered the list should be printed and each student assigned a number
between 1 – 12.
Sample Output
Student 1: John
Student 2: Bruce
Student 3: Diana
Etc.

*/

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {

            string[] class_names = new string[12];
            for (int i =0; i < class_names.Length; i++ )
            {
                Console.WriteLine($"Enter Student Name: ");
                class_names[i] = Console.ReadLine();
            }

            int counter = 1;
            foreach (string name in class_names)
            {
                Console.WriteLine("Student Number " + counter + ": " + name);
                counter++;
                //Console.WriteLine(name);
            }

        }
    }
}
