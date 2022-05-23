/* 
You have been asked to create a quiz program for primary school children to help with their
numeracy. Write a program that will ask the user to answer a multiplication equation. The
program should generate two random numbers between 1 and 10 and then display a
multiplication problem on screen:

What is 6 x 8?

The user must then type in an answer to the question and the program will tell the user if it
is right or wrong.

 */

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {

            //Random number Generator
            int randomNumber1 = numberGenerator();
            int randomNumber2 = numberGenerator();

            //Answer to guess
            int answer = randomNumber1 * randomNumber2;
            Console.WriteLine($"Answer = {answer}");

            //Question using a while loop
            bool isAnswerTrue = false;
            while (isAnswerTrue == false)
            {
                
                Console.WriteLine($"What is {randomNumber1} * {randomNumber2}?");
                int guess = Convert.ToInt32(Console.ReadLine());

                if (guess == answer)
                {
                    Console.WriteLine($"Correct answer was {answer}!");
                    isAnswerTrue = true;
                }
                else
                {
                    Console.WriteLine($"{guess} was the wrong answer, try again!");

                }

            }


        }

        static int numberGenerator ()
        {
            Random rnd = new Random();
            int num = rnd.Next(1, 13);  // creates a number between 1 and 12
            //int num_2 = rnd.Next(1, 12); // creates a number between 1 and 12

            return num;
        }
    }
}
