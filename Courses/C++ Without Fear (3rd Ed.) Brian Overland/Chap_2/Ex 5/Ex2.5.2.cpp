
#include <iostream>

using namespace std;

int main() 
{
    int total =0, n=0;
    int start, range, x;


    cout << "Welcome to NIM. Pick a starting total: " << endl;
    cin >> start; 
    // Loop to check that the starting number
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
    
    cout << "Pick a range number (1 to 7) " << endl;
    cin >> x; 
    //Loop to select the game range
    while (true)
    {
        if (x<1 || x>7)
        {
            cout << "Range must be between 1 to 7" << endl;
            cout << "Re-enter range number: "<< endl;
            cin >> x;
        }
        else
        {
            range = x;
            break;
        }
    }
    //Robot Strategy
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
    //User input
    cout << "Enter num to subtract (1 or " << range << "): " << endl;
    cin >> n;
        while (n<1 || n>range)
        {
            cout << "Input must be 1 to " << range << endl;
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