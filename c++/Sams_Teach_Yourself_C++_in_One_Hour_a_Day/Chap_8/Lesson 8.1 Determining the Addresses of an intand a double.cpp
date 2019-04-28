#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.1 Determining the Addresses of an intand a double" << endl;
  cout << "----------------------------------------------------------" << endl;
  int Age = 30;
  const double Pi = 3.1416;

  cout << "Integer Age is at: 0x" << hex << &Age << endl;
  cout << "Double Pi is located at: 0x" << hex << &Pi << endl;

  return 0;
}
