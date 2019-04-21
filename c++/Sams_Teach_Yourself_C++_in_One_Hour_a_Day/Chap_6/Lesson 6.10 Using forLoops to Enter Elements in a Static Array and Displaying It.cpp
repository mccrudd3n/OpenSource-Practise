#include <iostream>

int Function()
{
    using namespace std;
    const int ARRAY_LENGTH = 5;
    int MyInts [ARRAY_LENGTH] = {0};

    cout << "Populate array of " << ARRAY_LENGTH << " integers" << endl;

    for (int ArrayIndex = 0; ArrayIndex < ARRAY_LENGTH; ++ArrayIndex)
      {
          cout << "Enter an integer for element " << ArrayIndex << ": ";
          cin >> MyInts[ArrayIndex];
      }

    cout << "Displaying contents of Array: " << endl;

    for (int ArrayIndex = 0; ArrayIndex < ARRAY_LENGTH; ++ArrayIndex)
    cout << "Element " << ArrayIndex << " = " << MyInts[ArrayIndex] <<endl;

}

int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 6.10 Using forLoops to Enter Elements in a Static Array and Displaying It" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    Function();

    return 0;
}
