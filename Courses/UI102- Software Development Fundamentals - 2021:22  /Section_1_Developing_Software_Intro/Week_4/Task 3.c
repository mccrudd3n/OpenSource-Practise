/* Use a for loop to find which numbers in a given range are odd and even. 
 
- The user should be prompted for a number to start the loop and a number to end 
the loop. 
- Use the modulus operator to see if a number has a remainder when divided by two
*/

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter start of Loop: ");
            //Start of Loop
            int s_Loop = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter end of loop: ");
            //End of Loop
            int e_Loop = Convert.ToInt32(Console.ReadLine());

            //User Input Test
            //Console.WriteLine($"Start = {s_Loop}, End = {e_Loop}");


            for (int i = s_Loop; i <= e_Loop; i++)
            {
                // Loop Output test
                // Console.WriteLine($"Test Iterate {i}");

                if (i % 2 == 0)
                {
                    Console.WriteLine($"{i} = Even");
                }
                else
                {
                    Console.WriteLine($"{i} = Odd");
                }

            }

        }
    }
}
