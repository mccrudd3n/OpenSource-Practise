/*
Currently uncertain in making PC use a halfing strategy ie

-Highest number is chosen by user
-Number to be guessed by computer

then computer will guess half of the highest and keep halfing until success

Current mindset/skill which I need to work on is the ability to write what will happen when
the  user selects it - I maanaged to make the user choose if its too high but not when its 
too low. User can also exit the loop.

I will move on and get back to this in the future

19/01/2022


*/



#include <iostream>
#include <cstdlib> //rand and srand functions
#include <ctime>

using namespace std;

int main ()
{
    int n =0;
    int number_To_Find=0;
    int high_Limit_Number;
    int low_Limit_Number=0;
    bool computer_guess = true;
    int computer_est;


    //Setting Game Params by user
    cout << "Select guessing highest limit number " << endl;
    cin >> high_Limit_Number;
    cout << "Select a number you want to the computer to guess" << endl;
    cin >> number_To_Find;

    srand(time(nullptr));
    int guess = rand() % high_Limit_Number + 1; //Computer Guess Limit linked to starting number

    while (computer_guess ==true)
    {

    cout << "Is the number " << guess << "?" << endl;
    cout << "Tell me how I did; " <<endl;
    cout << "1 - Too high " <<endl;
    cout << "2 - Too low" <<endl;
    cout << "3 - Correct" <<endl;
    cin >> n;

        if (n==3)
        {
            cout << "+1 Point to computer! Bye! ";
            computer_guess = false;
        } 
        else if (n < 1)
        {
            cout << "Guss is too high. " << endl;
            
        }
        else (n > 2);
        {
            cout << "Guess is too low. " << endl;
        }

    }
    
    return 0;
}