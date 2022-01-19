/*
Program Issues, I am ment to put printnum.cpp into a "Do-While" Loop but hench the comment,
I am struggling. Interesting to learn about the switch statment to allow me to switch in a cascade
type situation, testing each parameter then breaking.

19/01/2022




*/



#include <iostream>

using namespace std;

int main() 
{
    int n=0;
    int x=0;
    int tens_digits = n/ 10;
    int units_digits = n % 10;
    
    do
    {
    
        cout << "Enter a number from 20 to 99" << endl;
        cin >> n;

        switch(tens_digits)
        {
            case 2: cout << "twenty "; break;
            case 3: cout << "thirty "; break;
            case 4: cout << "forty "; break;
            case 5: cout << "fifty "; break;
            case 6: cout << "sixty "; break;
            case 7: cout << "seventy "; break;
            case 8: cout << "eighty "; break;
            case 9: cout << "ninety "; break;
            
        }

        switch(units_digits)
    {
        case 1: cout << "one" << endl; break;
        case 2: cout << "two" << endl; break;
        case 3: cout << "three" << endl; break;
        case 4: cout << "four" << endl; break;
        case 5: cout << "five" << endl; break;
        case 6: cout << "six" << endl; break;
        case 7: cout << "sever" << endl; break;
        case 8: cout << "eight" << endl; break;
        case 9: cout << "nine" << endl; break;
        
    }
    }

    while (true)
    
        if (x < 0)
        {
            cout << "Continue? 1 - Yes, 0 - No" << endl;
            cin >> x;
            n = x;
        }
        else
        {
            break;
        }
    

    
}   