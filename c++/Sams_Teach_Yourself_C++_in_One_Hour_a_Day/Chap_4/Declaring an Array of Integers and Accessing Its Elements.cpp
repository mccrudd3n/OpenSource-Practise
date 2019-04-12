#include <iostream>

int ArrayDec()
{
    using namespace std;
    int ArrayExample [5] = {1,5,9,12,13};
    cout << "Array index 0 is " << ArrayExample[0] << endl;
    cout << "Array index 1 is " << ArrayExample[1] << endl;
    cout << "Array index 2 is " << ArrayExample[2] << endl;
    cout << "Array index 3 is " << ArrayExample[3] << endl;
    cout << "Array index 4 is " << ArrayExample[4] << endl;
}


int main()
{
    using namespace std;

    cout << "This function presents the declared array of Integers and Accessing Its Elements" << endl;

    //Functions are Invoked here
    ArrayDec();

    return 0;
}
