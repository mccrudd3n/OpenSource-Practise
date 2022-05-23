using System;

namespace Week_3
{
    class Program
    {
        static void Main(string[] args)
        {
            //Defs
            // Can Amount to see if its a 6, 12 or 24 pack
            Console.WriteLine("Can Amount - 6, 12 or 24 Pack?");
            int can_amount = Convert.ToInt32(Console.ReadLine());

            double can_ml = 0.44;
            double price_per_liter = 2.36;
            double cost_per_can = price_per_liter * can_ml;
            //TEST Console.WriteLine($"Cost_per_Can= {cost_per_can} = {price_per_liter} * {can_ml}");

            double total_cost = cost_per_can * can_amount;
            //TEST Console.WriteLine($"total cost= {total_cost} = {cost_per_can} * {can_amount}");

            double discount_10 = (total_cost / 100)*10;
            //TEST Console.WriteLine($"Discount_10= {discount_10} = {total_cost} / 100 *10");

            double discount_25 = (total_cost / 100)*25;
            //TEST Console.WriteLine($"Discount_25= {discount_25} = {total_cost} / 100 *25");
            
            if (can_amount == 6)
            {
                Console.WriteLine($"Total Cost: {total_cost}");
            }

            //when pack of 12 is bought 10% discount
            if (can_amount == 12)
            {
                Console.WriteLine($"Total Cost: £{total_cost-discount_10}");
            }

            //When pack of 24 is bought 25% discount
            if (can_amount == 24)
            {
                Console.WriteLine($"Total Cost: £{total_cost-discount_25}");
            }

        }
    }
}
