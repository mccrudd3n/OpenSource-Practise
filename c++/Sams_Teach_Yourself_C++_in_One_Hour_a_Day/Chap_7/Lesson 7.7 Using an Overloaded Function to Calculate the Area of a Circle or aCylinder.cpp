#include <iostream>

using namespace std;

const double Pi = 3.14159;

//Function Declaration
double Area (double Radius);
double Area (double Radius, double Height);

int main()
    {
    cout << endl; // Extra space
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 7.7 Using an Overloaded Function to Calculate the Area of a Circle or a Cylinder" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space

    cout << "Enter z for Cylinder, c for cicle: " << endl;
    cout << " >> ";
    char Choice = 'z';
    cin >> Choice;

    cout << "Enter Radius: " << endl;
    cout << " >> ";
    double Radius = 0;
    cin >> Radius;

    if (Choice == 'z')
    {
      cout << "Enter Height of the Cylinder:" << endl;
      cout << " >> ";
      double Height =0;
      cin >> Height;
      cout << "Area of Cylinder is: " << Area(Radius,Height) << endl;
    }
    else
    cout << "Area of Cicle is: " << Area(Radius) << endl;

    return 0;
  }

double Area (double Radius)
{
  return Pi * Radius * Radius;
}

double Area (double Radius, double Height)
{
  return 2 * Area (Radius) + 2 * Pi * Radius * Height;
}
