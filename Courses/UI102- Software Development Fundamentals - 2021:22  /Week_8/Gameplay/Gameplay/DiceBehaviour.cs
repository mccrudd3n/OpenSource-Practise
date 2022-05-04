using System;

namespace Gameplay
{
    public class DiceBehaviour
    {
        public static int SingleDiceRoll()
        {
            Random dice = new Random();
            int roll = dice.Next(1, 6);
            Console.WriteLine($"Single Dice Roll: {roll}");
            return roll; 
        }

        public static int DoubleDiceRoll()
        {
            Random dice = new Random();
            int roll1 = dice.Next(1, 6);
            int roll2 = dice.Next(1, 6);
            int roll3 = roll1 + roll2;
            Console.WriteLine($"Double Dice Roll: {roll1}, {roll2}");
            return roll3;
        }

    }
}
