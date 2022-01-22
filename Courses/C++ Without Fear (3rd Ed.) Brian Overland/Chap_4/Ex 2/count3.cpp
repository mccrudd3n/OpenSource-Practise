#include <iostream>
using namespace std;

int main()
{
    int n=0;

    cout << "Enter a number and press ENTER: " << endl;
    cin >> n;

    for (int i = 1; i <= n; ++i ){
        cout << i << " ";
    }
    return 0;

}