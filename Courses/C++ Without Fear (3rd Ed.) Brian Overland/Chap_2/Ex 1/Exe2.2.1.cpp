#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int n1 = 0;
    int n2 = 0;

    cout << "Enter first number and press ENTER: " << endl;
    cin >> n1;
    cout << "Enter second number and press ENTER: " << endl;
    cin >> n2;

    i = n2;
    
    while (i >= n1){
        cout << i << " ";
        i=i-1;
    }
    return 0;
}