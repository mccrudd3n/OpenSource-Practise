
#include <iostream>

using namespace std;

int main() 
{
    int total =0, n=0;
    int start;

    cout << "Welcome to NIM. Pick a starting total: " << endl;
    cin >> start; 

    while (true){
        if (start < 0){
        cout << "Start number must be greater than 1" << endl;
        cout << "Re-enter starting number: "<< endl;
        cin >> start;
        }
        else{
            total = start;
            break;
        }
    }
    
    while (true)
    {
        if ((total % 3) == 2)
        {
        total = total - 2;
        cout << "I am subtracting 2." << endl;
        }

        else
        {
        total--;
        cout << "I am subtracting 1" << endl;
        }

    cout << "New total is " << total << endl;
    if (total <= 0)
    {
        cout << "I win!" << endl;
        break;
    }

    cout << "Enter num to subtract (1 or 2): " << endl;
    cin >> n;
    while (n<1 || n>2)
    {
        cout << "Input must be 1 or 2" << endl;
        cout << "Re-enter: "<< endl;
        cin >> n;
    }
    total = total -n;
    cout << "New total is: " << total << endl;
    if (total <= 0)
    {
        cout << "You win!" << endl;
        break;
    }
}
    return 0;
}

   