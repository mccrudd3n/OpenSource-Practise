using System;

namespace Week_3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Student Name: ");
            string name = Console.ReadLine();

            Console.WriteLine("Enter Subject Name: ");
            string sub_name = Console.ReadLine();

            Console.WriteLine("Enter Grade: ");
            int grade = Convert.ToInt32(Console.ReadLine());

            if(grade <= 39)
            {
                Console.WriteLine($"Student Name:       {name}");
                Console.WriteLine($"Subject of Study:   {sub_name}");
                Console.WriteLine($"Grade:              Ungraded");
            }
            else if (grade >= 40 && grade <= 49)
            {
                Console.WriteLine($"Student Name:       {name}");
                Console.WriteLine($"Subject of Study:   {sub_name}");
                Console.WriteLine($"Grade:              D");
            }
            else if (grade >= 50 && grade <= 59)
            {
                Console.WriteLine($"Student Name:       {name}");
                Console.WriteLine($"Subject of Study:   {sub_name}");
                Console.WriteLine($"Grade:              C");
            }
            else if (grade >= 60 && grade <= 69)
            {
                Console.WriteLine($"Student Name:       {name}");
                Console.WriteLine($"Subject of Study:   {sub_name}");
                Console.WriteLine($"Grade:              B");
            }
            else if (grade <= 70)
            {
                Console.WriteLine($"Student Name:       {name}");
                Console.WriteLine($"Subject of Study:   {sub_name}");
                Console.WriteLine($"Grade:              A");
            }


        }
    }
}