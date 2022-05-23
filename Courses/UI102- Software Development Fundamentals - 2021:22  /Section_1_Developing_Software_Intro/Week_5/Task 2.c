/* 
Write a program that will ask the user to guess a random number between 1-20. (The
random number is 8 but we won’t tell the user that!). The program should repeatedly
prompt the user to enter a number and only stop if the user guesses correctly.

 
 Adapt the above program so that a new random number between 1 – 20 is generated each
time the program runs. The program should also count how many tries it took the user to
guess the random number and display this at the end.
 
 */

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {

            int counter = 0;
            Random random = new Random();
            int answer = random.Next(1, 21);
            //Test Random generator between 1 to 20
            Console.WriteLine($"{answer}");
            int guess = 0;
            do
            {
                int answer2 = random.Next(1, 21);
                Console.WriteLine($"{answer2}");
                answer = answer2;
                Console.WriteLine("Enter a guess between 1 to 20");
                int guess2 = Convert.ToInt32(Console.ReadLine());
                guess = guess2;
                counter++;
                if (guess != answer)
                {
                    Console.WriteLine($"Sorry {guess} is not the right answer!");
                }
            }
            while (guess != answer);

            Console.WriteLine($"Welldone you guess the right answer {answer} and it took you {counter} trys!");





        }
    }
}
