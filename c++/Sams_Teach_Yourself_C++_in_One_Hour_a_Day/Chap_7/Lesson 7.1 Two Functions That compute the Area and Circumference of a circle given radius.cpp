#include <iostream>

using namespace std;

const double Pi = 3.14159; //Global Var

//Function Declaration

double Area(double InputRadius);
double Circumference(double InputRadius);

//Function Definitions
double Area (double InputRadius)
{
  return Pi * InputRadius * InputRadius;
}
double Circumference (double InputRadius)
{
  return 2* Pi * InputRadius;
}

int main()
{
    cout << endl; // Extra space
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 7.1 Two Functions That compute the Area and Circumference of a circle given radius" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space

    //UserInput
    cout << "Enter Radius: " << endl;
    cout << " >> ";
    double Radius =0;
    cin >> Radius;

    //Call Function Area
    cout << "Area is " << Area(Radius) << endl;

    //Call Function Circumference
    cout << "Circumference is " << Circumference(Radius) << endl;

    return 0;
}
