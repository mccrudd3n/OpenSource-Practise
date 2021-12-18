#include <iostream>
using namespace std;

int main()
{
    double ctemp, ftemp;

    cout << "Insert a Celsius temp and press ENTER: ";
    cin >> ctemp;
    ftemp = (ctemp * 1.8) + 32;
    cout << "Fahrenheit temp is: " << ftemp;
    return 0;
}