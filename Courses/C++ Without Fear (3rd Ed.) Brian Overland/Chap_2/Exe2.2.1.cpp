#include <iostream>

using namespace std;

int main()
{
    int n1=0, n2=0;

    cout << "Enter First number and press ENTER: " << endl;
    cin >> n1;

    cout << "Enter Second number and press ENTER: " << endl;
    cin >> n2;

/*  EXE 2.2.1 - Print all ints from N1 to N2 in order  
    while (n1 <= n2){
        cout << n1 << " ";
        n1=n1+1;
    }*/

        while (n1 <= n2){
        cout << n1 << " ";
        n1=n1-1;
    } //Inf loop - need to sort out
    return 0;
}
