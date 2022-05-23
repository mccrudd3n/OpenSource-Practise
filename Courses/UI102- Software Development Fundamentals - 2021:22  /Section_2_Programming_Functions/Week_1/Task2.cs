using System;
using System.Text.RegularExpressions;

namespace University
{
    class Program
    {
      static string[] months = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec" };

        static void Main(string[] args)
        {
            double[] normalTemp = { 1.2, 1.3, 3.0, 5.1, 8.3, 11.2, 13.4, 12.8, 10.2, 7.1, 3.7, 2.0 };
            double[] warmestTemp = { 4.1, 4.4, 6.4, 9.3, 13.1, 15.9, 18.1, 17.4, 14.2, 10.6, 6.8, 4.8 };
            double[] coldestTemp = { -1.8, -1.8, -0.4, 1.0, 3.5, 6.5, 8.7, 6.2, 3.7, 0.7, -0.9 };
            int[] rainfall = { 72, 52, 59, 62, 58, 63, 47, 68, 65, 112, 98, 81 };

            FindHighestRainFall(rainfall);
            TotalRainfall(rainfall);
            AverageYearTemp(normalTemp);
            CountAmountBelowFreezing(coldestTemp);
            CountTempretureRange(warmestTemp);

        }

        private static void FindHighestRainFall(int[] rainfall)
        {
            int maxRainFall = 0;
            string month = "";

            for (int i =0; i < rainfall.Length; i++)
            {
                if (maxRainFall < rainfall[i])
                {
                    maxRainFall = rainfall[i];
                    month = months[i];
                }
            }

            Console.WriteLine("The highest rainfall was " + month + " with " + maxRainFall + " mm");
        }

        private static void TotalRainfall(int[] rainfall)
        {
            int TotalRainFall = 0;
            string month = "";

            for (int i = 0; i < rainfall.Length; i++)
            {
                TotalRainFall += rainfall[i];

            }
            Console.WriteLine("Total rainfall Over Year was " + TotalRainFall + " mm");

        }

        private static void AverageYearTemp(double[] normalTemp)
        {
            double totalAverageMonthTemp = normalTemp[0];

            for(int i = 1; i < normalTemp.Length; i++)
            {
                totalAverageMonthTemp += normalTemp[i];

            }

            double averageAnnualTemp = totalAverageMonthTemp / normalTemp.Length;

            Console.WriteLine("Average tempreture over the year was " + averageAnnualTemp + "C");
        }

        private static void CountAmountBelowFreezing(double[] coldestTemp)
        {
            int freezingCounter = 0;

            for (int i = 0; i < coldestTemp.Length; i++)
            {

                if (coldestTemp[i] < 0)
                {
                    freezingCounter++;
                }
            }

            Console.WriteLine($"Number of times the teampreture was below freezing: " + freezingCounter);
        }

        private static void CountTempretureRange(double[] warmestTemp)
        {
            int WarmCounter = 0;

            for(int i = 0; i < warmestTemp.Length; i++)
            {
                if (warmestTemp[i] > 15)
                {
                    WarmCounter++;
                }
            }

            Console.WriteLine($"Number of times the monthly tempreture reached above 15 degrees: " + WarmCounter);
        }
    }

}
