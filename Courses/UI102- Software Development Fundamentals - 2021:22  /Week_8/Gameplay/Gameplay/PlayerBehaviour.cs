using System;

namespace Gameplay
{
    public class PlayerBehaviour
    {
        public double PlayerHealth { get; set; }
        public int PlayerLevel { get; set; }
        public int PlayerArmour { get; set; }
        public int PlayerGold { get; set; }
        public int PlayerPotion { get; set; }

        public PlayerBehaviour(double health, int level, int armour, int gold, int potion)
        { 
            this.PlayerHealth = health;
            this.PlayerLevel = level;
            this.PlayerArmour = armour;
            this.PlayerGold = gold;
            this.PlayerPotion = potion;

        }


        public static void LivePlayer()
        {
            var playerstatus = new PlayerBehaviour(100, 1, 1, 100, 1);
            Console.WriteLine("");
            Console.WriteLine("Your Current Stats");
            Console.WriteLine("");
            Console.WriteLine($"Health: {playerstatus.PlayerHealth} " +
                $"Armour: {playerstatus.PlayerArmour} " +
                $"Gold: {playerstatus.PlayerGold} " +
                $"Potion: {playerstatus.PlayerPotion} " +
                $"Level: {playerstatus.PlayerLevel} ");
            Console.WriteLine("");
        }


        public static void PlayerStatus()
        {
            Console.WriteLine("Feels good to be home.....");
            Console.WriteLine("Press Enter");
            string input_operator = Console.ReadLine();

            while (input_operator != "1" || input_operator != "2" || input_operator != "3" ||
                input_operator != "4" || input_operator != "5" || input_operator != "Q" || input_operator != "q")
            {
                Console.WriteLine("As you looked at yourself...you found: ");
                PlayerBehaviour.LivePlayer();
                Console.WriteLine("Rest +10 health [1] || Drink Potion +50% health [2] || Exit[Q]");

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
                    Console.WriteLine("");
                    Console.WriteLine("Leaving Saferoom...Goodluck");
                    Console.WriteLine("");
                    break;
                }
            }

        }
        
    }
}
