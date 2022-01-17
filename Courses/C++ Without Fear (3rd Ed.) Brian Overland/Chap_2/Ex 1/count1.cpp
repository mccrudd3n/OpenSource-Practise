#include <iostream>

using namespace std;

int main()
{
    int i=0, n=0;

    cout << "Enter number and press ENTER: " << endl;
    cin >> n;

    i=1;
    while (i <= n){
        cout << i << " ";
        i=i+1;
    }
    return 0;
}
