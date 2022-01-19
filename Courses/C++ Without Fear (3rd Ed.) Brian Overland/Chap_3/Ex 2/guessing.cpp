#include <iostream>
#include <cstdlib> //rand and srand functions
#include <ctime>

using namespace std;

int main ()
{
    int n =0;
    bool do_more = true;

    srand(time(nullptr));
    int target = rand() % 50 + 1;

    do {
        cout << "Enter your guess: " << endl;
        cin >> n;
        if (n==0)
        {
            cout << "Bye! ";
            do_more = false;
        } 
        else if (n > target)
        {
            cout << "Guss is too high. " << endl;
        }
        else if (n < target)
        {
            cout << "Guess is too low. " << endl;
        }
        else
        {
            cout << "You win! " << endl;
            cout << "Answer is " << n << endl;
            do_more = false;
        }
               
    }while (do_more);
    
    return 0;
}