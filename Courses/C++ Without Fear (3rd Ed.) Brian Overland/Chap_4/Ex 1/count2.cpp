#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int i=0;

    cout << "Enter a number then press ENTER" << endl;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    return 0;

}