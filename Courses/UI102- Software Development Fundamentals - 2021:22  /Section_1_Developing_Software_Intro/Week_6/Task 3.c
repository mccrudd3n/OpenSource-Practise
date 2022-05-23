/* 
Add a new method in your program which works out the cubic area of a room.
The method must accept three parameters; width, length, height (all in cm). It should then multiply these
together to produce the cubic volume and display this on screen. (It is assumed that all
rooms are cube shaped in this exercise)

 */

using System;

namespace University
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Welcome to the Cubic Calculator!");
            Console.WriteLine("Enter Width");
            double Width = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Enter Length");
            double Length = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Enter Height");
            double Height = Convert.ToDouble(Console.ReadLine());

            double total = cubic(Width, Length, Height);

            Console.WriteLine($"Cubic of {Width} * {Length} * {Height} is {total}");

        }

        static double cubic(double width, double length, double height)
        {
            double total = width * length * height;
            //Console.WriteLine($"Cubic of {width} * {length} * {height} is {total}");
            return total;
        }
    }
}
