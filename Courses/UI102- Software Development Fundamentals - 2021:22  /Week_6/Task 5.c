/* 
You are working on a piece of software for a bank. The bank staff need to show how the
value of an investment grows over one, three and five years. Write a method in your
program that will work out the value of an investment. The method should accept three
parameters: the initial investment amount, the annual interest rate and the number of years
the money is being invested for. The method should return the investment amount to the
main program and display it.

Call the method three times from your main program using the following parameters:
Amount Interest Rate Number of Years

£1,000 3.5% 1
£1,000 4.0% 3
£1,000 4.5% 5

 */

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {
            
            Console.WriteLine("Compund Investment Calculator");
            Console.WriteLine("Enter initial investment");
            double initialInvestment = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Enter interest");
            double interest = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Enter amount of years held");
            double yearsHeld= Convert.ToDouble(Console.ReadLine());

            double endInvestment = investmentCalculator(initialInvestment, interest, yearsHeld);
            Console.WriteLine($" ----------------------------- ");
            Console.WriteLine($"Initial Investment of {initialInvestment} has increased by {interest}% to {endInvestment} in {yearsHeld}");


        }

        static double investmentCalculator (double investmentAmount, double interestRate, double numYears)
        {
            double profit_counter = 0;
            
            for (int i = 0; i < numYears; i++ )
            {

                double profit = (investmentAmount * (interestRate / 100));
                profit_counter = investmentAmount + profit;
                
                Console.WriteLine($"Initial Investment has increased from {investmentAmount} to {profit_counter} in {i+1}");
                investmentAmount = profit_counter;
            }
            return profit_counter;

        }
    }
}
