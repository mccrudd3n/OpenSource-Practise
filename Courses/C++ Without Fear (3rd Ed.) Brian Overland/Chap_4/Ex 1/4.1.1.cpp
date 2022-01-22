#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int i=0;

    cout << "Enter first number then press ENTER" << endl;
    cin >> i;
    cout << "Enter second number then press ENTER" << endl;
    cin >> n;
    
    for (i; i <= n; i++)
    {
        cout << i << " ";
    }
    return 0;

}