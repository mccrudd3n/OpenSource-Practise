using System;

namespace Week_3
{
    class Program
    {
        static void Main(string[] args)
        {
            string firstName = "Jerry";
            int age = 72;

            if(age > 65)
            {
                Console.WriteLine($"{firstName} must retire");
            }
            else
            {
                Console.WriteLine($"Is ok to keep working");
            }


        }
    }
}
