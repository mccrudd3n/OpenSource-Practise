#include <iostream>

using namespace std;

int main()
{
    int i=1, n=0;

    cout << "Enter number and press ENTER: " << endl;
    cin >> n;

    while (i <= n){
        cout << i << " ";
        i=i+1;
    }
    return 0;
}
