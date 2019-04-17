#include <iostream>
#include <string>

int ConditionalExe()
{
    using namespace std;
    //Array with 20 elements and NULL inputs
    char Buffer [20] = {'\0'};
    cout << "Enter a line of text " << endl;

    string LineEntered;
    getline (cin, LineEntered);

    if (LineEntered.length() < 20)
      {
        strcpy(Buffer, LineEntered.c_str());
        cout << "Buffer contains: " << Buffer << endl;
       }

}


int main()
{
    using namespace std;

    cout << endl; // Extra space so that its easy readable
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 6.3 Using Nested ifStatements in Multiplying or Dividing a Number." << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    ConditionalExe();

    return 0;
}
