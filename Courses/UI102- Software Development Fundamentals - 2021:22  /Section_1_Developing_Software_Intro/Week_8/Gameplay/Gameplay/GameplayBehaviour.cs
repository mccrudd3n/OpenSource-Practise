using static Gameplay.PlayerBehaviour;
using System;

namespace Gameplay
{
    public class GameplayBehaviour
    {


        public static void ExploreRoom()
        {
            Console.WriteLine("Exploring room....");
            MonsterBehaviour.MonsterFightOrFlight();
        }

        public static void EnterSafeRoom()
        {
            Console.WriteLine("Entering Saferoom....");
            PlayerBehaviour.PlayerStatus();
        }
       

        public static void UseMerchant()
        {
            Console.WriteLine("Visiting Merchant....");
            MerchantBehaviour.MerchantChat();
        }

        public static void Loot()
        {
            Console.WriteLine("Looting Monster or Merchant");
        }

        public static void Operation_section()
        {
            Console.WriteLine("Press Enter to start");

            string input_operator = Console.ReadLine();

            while (input_operator != "1" || input_operator != "2" || input_operator != "3" ||
                input_operator != "4" || input_operator != "5" || input_operator != "Q" || input_operator != "q")
            {
                Console.WriteLine("What would you like to do? ");
                Console.WriteLine("Explore[1] || Visit Merchant[2] || Visit Saferoom[3] || Use Potion[4] || Exit[Q]");

                string input_operator2 = Console.ReadLine();
                input_operator = input_operator2;

                if (input_operator == "1")
                {
                    ExploreRoom();
                }

                else if (input_operator == "2")
                {
                    UseMerchant();
                }

                else if (input_operator == "3")
                {
                    EnterSafeRoom();
                }

                else if (input_operator == "4")
                {
                    //UsePotion();
                }

                else if (input_operator == "5")
                {
                    Loot();
                }
                else if (input_operator == "Q")
                {
                    break;
                }
            }

            string[] weather = { "sunny", "cold", "dry", "overcast" };
            

        }
    }
}
