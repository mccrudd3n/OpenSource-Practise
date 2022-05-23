using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {
            double[] array = new double[5];
            for (int i = 0; i < array.Length; i++)
            {
                Console.WriteLine($"Enter number for position {i}");
                array[i] = Convert.ToDouble(Console.ReadLine());

            }

            double maxValue = array[0];

            for (int i = 1; i < array.Length; i++)
            {
                if(maxValue < array[i])
                {
                    maxValue = array[i];
                }
            }
            Console.WriteLine("Max value is " + maxValue);

        }

    }

}
