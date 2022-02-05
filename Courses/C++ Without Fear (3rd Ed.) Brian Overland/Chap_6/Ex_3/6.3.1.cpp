#include <iostream>
#include <string>

using namespace std;

string tens_names[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string units_names[] ={"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main()
{
    int n;
    while(true)
    {
    cout << "Enter a number from 20 to 99: (0=Exit) " << endl;
    cin >> n;
    if(n <= 19 | n >= 99)
    {
        cout << "Enter range between 20-99" << endl;
        cin >> n;
    }    
    if(n==0)
    {
        break;
    }
    int tens_digits = n/10;
    int units_digits = n%10;
    cout << "The number you entered was "; 
    cout << tens_names[tens_digits] << " ";
    cout << units_names[units_digits] << " ";
    }

    return 0;
}