using System;

namespace Gameplay
{
    public class PlayerBehaviour
    {
        public static double PlayerHealth()
        {
            double health = 100; 
            return health;
        }

        public static int PlayerAttack()
        {
            int attack = 1;
            return attack;
        }

        public static int PlayerArmour()
        {
            int armour = 1;
            return armour;
        }

        public static int PlayerGold()
        {
            int Gold = 100;
            return Gold;
        }

        public static int PlayerHealingPotion()
        {
            int potions = 3;
            return potions;
        }


        public static void PlayerStatus()
        {
            Console.WriteLine($"Health = {PlayerHealth()} || " +
                $"Attack Multiplier = {PlayerAttack()} || " +
                $"Armour = {PlayerArmour()} || " +
                $"Gold = {PlayerGold()} || " +
                $"Potions = {PlayerHealingPotion()}");

           
        }
    }
}
