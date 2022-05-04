using System;

namespace Gameplay
{
    public class MerchantBehaviour
    {
        public int MerchantHealth { get; set; }
        public int MerchantLevel { get; set; }
        public int MerchantArmour { get; set; }
        public int MerchantGold { get; set; }
        public int MerchantPotion { get; set; }

        public int ArmourForSale { get; set; }
        public int WeaponForSale { get; set; }
        public int PotionForSale { get; set; }

        public MerchantBehaviour(int health, int level,
            int armour, int gold, int potion, int armourinventory,
            int weaponinventory, int potioninventory)
        {
            this.MerchantHealth = health;
            this.MerchantLevel = level;
            this.MerchantArmour = armour;
            this.MerchantGold = gold;
            this.MerchantPotion = potion;

            this.ArmourForSale = armourinventory;
            this.WeaponForSale = weaponinventory;
            this.PotionForSale = potioninventory;
        }
        public static void Live_Merchant()
        {
            int health = DiceBehaviour.HealthDiceRoll();
            int armour = DiceBehaviour.DiceRoll();
            int level = DiceBehaviour.DiceRoll();
            int gold = DiceBehaviour.GoldDiceRoll();
            int potion = DiceBehaviour.DiceRoll();
            int armourinventory = DiceBehaviour.DoubleRoll();
            int weaponinventory = DiceBehaviour.DoubleRoll();
            int potioninventory = DiceBehaviour.DiceRoll();

            var merchantstatus = new MerchantBehaviour(health, level, armour, gold, potion,
            armourinventory, weaponinventory, potioninventory);
            Console.WriteLine();
            
            Console.WriteLine();
            Console.WriteLine("For Sale:" );
            Console.WriteLine($"Armour: { merchantstatus.ArmourForSale} " +
            $"Weapom: {merchantstatus.WeaponForSale} " +
            $"Potion: {merchantstatus.PotionForSale} ");
            Console.WriteLine();
            Console.WriteLine("Merchant Stats");
            Console.WriteLine($"Health: {merchantstatus.MerchantHealth} " +
            $"Attack: {merchantstatus.MerchantLevel} " +
            $"Armour: {merchantstatus.MerchantArmour} " +
            $"Gold: {merchantstatus.MerchantGold} " +
            $"Potion: {merchantstatus.MerchantPotion} ");
            Console.WriteLine();
        }

        public static void MerchantChat()
        {
            Console.WriteLine("Merchant: Hello! How can I help?..");
            Console.WriteLine("Press Enter");
            string input_operator = Console.ReadLine();

            while (input_operator != "1" || input_operator != "2" || input_operator != "3" ||
                input_operator != "4" || input_operator != "5" || input_operator != "Q" || input_operator != "q")
            {
                Console.WriteLine("Im looking to sell, if your looking to buy...");
                Console.WriteLine("Buy[1] || Sell[2] || Loot [3] || Leave [4] || Exit[Q]");

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
