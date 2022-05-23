using System;
using System.Text.RegularExpressions;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] classReview = { 1, 4, 2, 3, 5, 5, 1, 4, 4, 1, 4, 3, 4, 5, 1, 2, 2, 4, 5, 1 };

            ReviewConversion(classReview);
        }

        public static void ReviewConversion(int[] classReview)
        {

            string counter1star = "";
            string counter2star = "";
            string counter3star = "";
            string counter4star = "";
            string counter5star = "";

            for (int i = 0; i< classReview.Length; i++)
            {
                if (classReview[i] == 1)
                {
                    counter1star += "*";
                    continue;
                }
                else if (classReview[i] == 2)
                {
                    counter2star += "*";
                    continue;
                }
                else if (classReview[i] == 3)
                {
                    counter3star += "*";
                    continue;
                }
                else if (classReview[i] == 4)
                {
                    counter4star += "*";
                    continue;
                }
                else if (classReview[i] == 5);
                {
                    counter5star += "*";
                    continue;
                }
                
            }

            PrintResult(counter1star, counter2star, counter3star, counter4star, counter5star);

        }

        private static void PrintResult(string counter1star, string counter2star, string counter3star, string counter4star, string counter5star)
        {
            Console.WriteLine("**** Review Score ****");
            Console.WriteLine("Amazing          " + counter1star);
            Console.WriteLine("Good             " + counter2star);
            Console.WriteLine("OK               " + counter3star);
            Console.WriteLine("Boring           " + counter4star);
            Console.WriteLine("Awful            " + counter5star);

        }
    }

}
