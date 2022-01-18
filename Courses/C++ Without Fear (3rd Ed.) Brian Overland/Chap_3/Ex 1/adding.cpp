#include <iostream>

using namespace std;

int main()
{
    int sum = 0, n=0;

    do {
        cout << "Enter a number (0 For exit)" << endl;
        cin >> n;
        sum += n; // Book shows n += sum which is wrong, this is my correction
    }
    while (n>0);
    {
        cout << "The Sum is " << sum << endl;
    }
    return 0;
}