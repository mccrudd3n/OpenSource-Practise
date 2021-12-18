// This is the same as convert.cpp with minor optimization

#include <iostream>
using namespace std;

int main()
{
    double ctemp;

    cout << "Insert a Celsius temp and press ENTER: ";
    cin >> ctemp;

    cout << "Fahrenheit temp is: " << (ctemp * 1.8) + 32;
    cout << endl; 
    
    return 0;
}