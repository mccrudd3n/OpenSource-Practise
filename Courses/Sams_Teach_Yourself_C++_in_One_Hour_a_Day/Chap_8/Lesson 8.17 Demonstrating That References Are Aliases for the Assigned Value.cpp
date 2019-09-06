#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.17 Demonstrating That References Are Aliases for the Assigned Value" << endl;
  cout << "----------------------------------------------------------" << endl;
  cout << endl; //Extra space

  int  Original = 30;
  cout << "Original = " << Original << endl;
  cout << "Address is " << &Original << endl;

  int& Ref = Original;
  cout << "Ref is at address " << &Ref << endl;

  int& Ref2 = Ref;
  cout << "Ref2 is at address " << &Ref2 << endl;
  cout << "Ref2 gets vale Ref2 = " << dec << Ref2 << endl;

  return 0;
}
