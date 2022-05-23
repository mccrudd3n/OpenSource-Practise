using System;

namespace Gameplay
{
    public class MonsterBehaviour
    {
        public int MonsterHealth { get; set; }
        public int MonsterAttack { get; set; }
        public int MonsterArmour { get; set; }
        public int MonsterGold { get; set; }
        public int MonsterPotion { get; set; }

        public MonsterBehaviour(int health, int attack, int armour, int gold, int potion)
        {
            this.MonsterHealth = health;
            this.MonsterAttack = attack;
            this.MonsterArmour = armour;
            this.MonsterGold = gold;
            this.MonsterPotion = potion;
        }

        public static void LiveMonster()
        {

            int health = DiceBehaviour.HealthDiceRoll();
            int attack = DiceBehaviour.DiceRoll();
            int armour = DiceBehaviour.ArmourDiceRoll();
            int gold = DiceBehaviour.GoldDiceRoll();
            int potion = DiceBehaviour.DiceRoll();

            var monsterstatus = new MonsterBehaviour(health, attack, armour,
                gold, potion);

            Console.WriteLine($"Health: {monsterstatus.MonsterHealth} " +
                $"Attack: {monsterstatus.MonsterAttack} " +
                $"Armour: {monsterstatus.MonsterArmour} " +
                $"Gold: {monsterstatus.MonsterGold} " +
                $"Potion: {monsterstatus.MonsterPotion} ");
        }

        public static void MonsterFightOrFlight()
        {
            Console.WriteLine("You spoted a monster!");
            Console.WriteLine("Press Enter");
            string input_operator = Console.ReadLine();

            while (input_operator != "1" || input_operator != "2" || input_operator != "3" ||
                input_operator != "4" || input_operator != "5" || input_operator != "Q" || input_operator != "q")
            {
                Console.WriteLine("Monster Details: ");
                MonsterBehaviour.LiveMonster();
                Console.WriteLine("Fight [1] || Flight [2] || Leave (-10 Gold) [3] || Exit [Q] ");

                string input_operator2 = Console.ReadLine();
                input_operator = input_operator2;

                if (input_operator == "1")
                {
                    Console.WriteLine("Test case 1");

                }

                else if (input_operator == "2")
                {
                    Console.WriteLine("Test case 2");

                }

                else if (input_operator == "3")
                {
                    Console.WriteLine("Test case 3");

                }

                else if (input_operator == "4")
                {
                    Console.WriteLine("Test case 4");

                }

                else if (input_operator == "5")
                {
                    Console.WriteLine("Test case 5");

                }
                else if (input_operator == "Q")
                {
                    Console.WriteLine("Ok bye");
                    break;
                }
            }

        }




    }
}
