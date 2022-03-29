/* 
Create a program which simulates combat within a role playing game between an Orc and a
Human.

o Both the Human and the Orc start with 100 health.
o The program should run as long as both human and orc have more than 0 health.
o First the human rolls a 20 sided attack dice.
o Then the orc rolls a 20 sided attack dice.

After each roll:
▪ display the dice roll results
▪ deduct the relevant dice roll from the humans and the orc’s health
▪ Display the remaining health scores
o If the orc reaches zero first inform the user that they have triumphed
o If the orc wins, inform the user how the orc responds to it’s victory
 */

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {
            //Health Declared
            int orc = 100;
            int hero = 100;

            Random dice = new Random();

            do
            {
                int roll = dice.Next(1, 21);
                orc -= roll;
                Console.WriteLine($"Orc was damanged {roll} and now has {orc} health");

                if (orc <= 0) continue;

                roll = dice.Next(1, 21);
                hero -= roll;
                Console.WriteLine($"Hero was damanged {roll} and now has {hero} health");
                
            } while (hero > 0 && orc > 0);

            Console.WriteLine(hero > orc ? "Hero wins" : "Orc wins!");


        }
    }
}
