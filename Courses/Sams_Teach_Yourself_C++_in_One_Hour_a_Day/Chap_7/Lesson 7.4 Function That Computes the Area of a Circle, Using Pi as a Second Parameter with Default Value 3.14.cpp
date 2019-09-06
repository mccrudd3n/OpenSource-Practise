#include <iostream>

using namespace std;

//Function Declare
double Area (double Radius, double Pi =3.14);

//Function "How to"
double Area (double Radius, double Pi)
{
  return Pi * Radius * Radius;
}

int main()
{
    cout << endl; // Extra space
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 7.4 Function That Computes the Area of a Circle, Using Pi as a Second Parameter with Default Value 3.14" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space


    //User Input Radius
    cout<< "Enter Radius: " << endl;
    cout << " >> ";
    double Radius = 0;
    cin >> Radius;

    cout << "Pi is set to 3.14, do you wish to change this (y / n)? " << endl;
    char ChangePi  = 'n';
    cin >> ChangePi;

    double CircleArea =0;
    if (ChangePi == 'y')
    {
      cout << "Enter New Pi: ";
      double NewPi = 3.14;
      cin >> NewPi;
      CircleArea = Area (Radius, NewPi);
    }
    else
    CircleArea = Area(Radius);

    //Call Function

    cout << "Area is: " << CircleArea << endl;
    return 0;
}
