#include <iostream>


int logic()
{
    using namespace std;
    cout << "-------------------------------------------------------------" << endl;
    cout << " Use boolean values (0 / 1) to answer the questions" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "Is there a deep discount on the product?" << endl;
    bool discount = false;
    cin >> discount;
    cout << "Is this an asset(1) or liability(0)? " << endl;
    bool asset = false;
    cin >> asset;

    //Conditional statement uses logical AND and NOT
    if (discount || asset)
      cout << "Buy it" << endl;
      else
      cout << "It is more of a liability" << endl;

}


int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Using Logical NOT and Logical OR Operators to Help You Decide If You Can Buy That product." << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    logic();

    return 0;
}
