#include <iostream>

using namespace std;

const double Pi = 3.14159; //Global Var

//Function Declaration
double SurfaceArea (double Radius, double Height);

//Function Definitions
double SurfaceArea (double Radius, double Height)
{
  double Area = 2 * Pi * Radius * Radius + 2 * Pi * Radius * Height;
  return Area;
}

int main()
{
    cout << endl; // Extra space
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 7.2 Function That Accepts Two Parameters to Compute the Surface Area of aCylinde" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space

    //Cylinder Var Inputs
    double inRadius =0, inHeight =0;
    cout << "Enter Radius of Cylinder: " << endl;
    cout << " >> ";
    cin >> inRadius;
    cout << "Enter Height of Cylinder: " << endl;
    cout << " >> ";
    cin >> inHeight;

    cout << "Surface Area: " << SurfaceArea(inRadius, inHeight) <<endl;
    return 0;
}
