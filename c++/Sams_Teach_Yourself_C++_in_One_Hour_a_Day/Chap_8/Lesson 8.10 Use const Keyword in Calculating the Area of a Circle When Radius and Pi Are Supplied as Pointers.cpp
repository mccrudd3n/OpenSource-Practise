#include <iostream>

using namespace std;


void CalcArea( const double* const pPi, //const pointer to const data
  const double* const pRadius, //nothing can be changed
  const double* const pArea //change pointer value not address
)
//Check Pointer before using
{
  if (pPi && pRadius && pArea)
  *pArea = (*pPi) * (*pRadius) * (*pRadius);
}

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.10 Use const Keyword in Calculating the Area of a Circle When Radius andPi Are Supplied as Pointers" << endl;
  cout << "----------------------------------------------------------" << endl;

  const double Pi = 3.1416;

  cout << "Enter Radius of the Circle:" << endl;
  cout << " >> ";
  double Radius = 0;
  cin >> Radius;

  double Area =0;
  CalcArea (&Pi, &Radius, &Area);

  cout << "Area is: " << Area << endl;

  return 0;
}
