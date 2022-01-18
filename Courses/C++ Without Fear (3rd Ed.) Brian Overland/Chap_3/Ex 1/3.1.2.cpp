#include <iostream>

using namespace std;

int main()
{
    float sum = 0, n=0;
    bool test = true;
    while (test)
    {
        cout << "Enter number to add (0 - to finish) " << endl;
        cin >> n;
        sum = sum + n;

        if(n <= 0)
        {
            cout << "total is " << sum << endl;
            test = false;
        }
    }
    return 0;
}