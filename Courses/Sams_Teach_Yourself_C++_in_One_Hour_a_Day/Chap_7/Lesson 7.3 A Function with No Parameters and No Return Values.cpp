#include <iostream>

using namespace std;

void SayHello();

int main()
{
    cout << endl; // Extra space
    cout << "-------------------------------------------------------------" << endl;
    cout << "Lesson 7.3 A Function with No Parameters and No Return Values" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << endl; // Extra space

    SayHello();
    return 0;
}

void SayHello()
{
  cout <<"Hello World" << endl;
}
