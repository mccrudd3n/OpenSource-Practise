#include <iostream>

int Array()
{
    using namespace std;

    //Number of Element is defined here
    const int ArrayLength = 5;

    //Array is built below using the defined number of arrays
    int ArrayExample [ArrayLength] = {0};

    cout << "Which Element do you want to change below? "<< endl;
    cout << endl;

    // Present the User the current Array
    cout << "Array index 0 is " << ArrayExample[0] << endl;
    cout << "Array index 1 is " << ArrayExample[1] << endl;
    cout << "Array index 2 is " << ArrayExample[2] << endl;
    cout << "Array index 3 is " << ArrayExample[3] << endl;
    cout << "Array index 4 is " << ArrayExample[4] << endl;

    //Selects which Element to change in the Array
    int element = 0;
    cin >> element;

    //Selects the New Valuse for the selected element
    cout << "Enter New Value for this element" << endl;
    cin >> ArrayExample [element];


    //Print the new Array
    cout << "Array index 0 is " << ArrayExample[0] << endl;
    cout << "Array index 1 is " << ArrayExample[1] << endl;
    cout << "Array index 2 is " << ArrayExample[2] << endl;
    cout << "Array index 3 is " << ArrayExample[3] << endl;
    cout << "Array index 4 is " << ArrayExample[4] << endl;
}


int main()
{
    using namespace std;

    cout << "This function presents a methed of assigning Values to Elements in an Array" << endl;

    //Functions are Invoked here
    Array();

    return 0;
}
