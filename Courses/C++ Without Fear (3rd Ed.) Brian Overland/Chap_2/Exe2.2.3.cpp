#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int n1 = 0;
    int n2 = 0;
    int remainder = 0;

    cout << "Enter first number and press ENTER: " << endl;
    cin >> n1;
    cout << "Enter second number and press ENTER: " << endl;
    cin >> n2;

    i = n1;
    
    while (i <= n2){
        
        i=i+1;
        remainder = i%2;
        if(remainder==0) {
        cout << i << " ";
        }
    }
    return 0;
}