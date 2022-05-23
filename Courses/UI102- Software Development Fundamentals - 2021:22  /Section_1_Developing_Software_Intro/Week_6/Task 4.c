/* 
You must write a program that will calculate car parking charges.Anyone parking in the car
park will pay a minimum flat rate of £3 for up to three hours of parking. Every hour (or part
of an hour) over the three hours will incur and additional 50p charge. There is a £10 cap
meaning the charge cannot go over £10.

You must write a method that will accept the time spent in car park as a parameter and
return the parking charge for that vehicle. Test it with the following times:

- 2.5 hours
- 5 hours
- 7.25 hours
- 1 hour
- 16 hours
- 24 hours

 */

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Parking duration (Hours): ");
            double time_period = Convert.ToDouble(Console.ReadLine());

            if (time_period <= 3)
            {
                Console.WriteLine("Parking price = £3");
            }
            else
            {
                double totalCost = overTime(time_period);
                Console.WriteLine($"Parking cost = £{totalCost}");
            }
            
        }

        static double overTime (double overtime)
        {
            double overtime_cal = (overtime - 3);
            double overtime_cost = (overtime_cal * 0.5);
            double total_Cost = (3 + overtime_cost);


            if (total_Cost >= 10)
            {
                total_Cost = 10;
                return total_Cost;
            }
            else
            return total_Cost;

        }
    }
}
