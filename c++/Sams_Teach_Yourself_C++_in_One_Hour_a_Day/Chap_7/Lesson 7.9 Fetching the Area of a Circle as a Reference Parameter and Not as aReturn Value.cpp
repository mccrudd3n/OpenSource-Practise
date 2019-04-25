#include <iostream>

using namespace std;

const double Pi = 3.1416;


void Area (double Radius, double& Result)
{
  Result = Pi * Radius * Radius;
}

int main()
  {
    cout << endl; // Extra space
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 7.9 Fetching the Area of a Circle as a Reference Parameter and Not as aReturn Value" << endl;
    cout << "-------------------------------------------------------------" << endl;

    cout << "Enter Radius of the Circle: "<< endl;
    cout << " >> ";
    double Radius = 0;
    cin >> Radius;

    double AreaFetch =0;
    Area (Radius, AreaFetch);

    cout << "Area is : " << AreaFetch << endl;
    return 0;

  }
