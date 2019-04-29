#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.6 Demonstrating That Pointers to Different Types Have the Same Sizes" << endl;
  cout << "----------------------------------------------------------" << endl;

  int Age = 30;
  double Pi = 3.1416;
  char SayYes = 'y';

  //Initial pointers to the address variables
  int* pInt = &Age;
  double* pDouble = &Pi;
  char* pChar = &SayYes;

  cout << "sizeof fundamental types" << endl;
  cout << "sizeof(int) = " << sizeof(int) << endl;
  cout << "sizeof(double) = " << sizeof(double) << endl;
  cout << "sizeof (char) = " << sizeof(char) << endl;
  cout << "----------------------" << endl;
  cout << "sizeof Pointers to Fundamental types" << endl;
  cout << "sizeof(pInt) = " << sizeof(pInt) << endl;
  cout << "sizeof(pDouble) = " << sizeof(pDouble) << endl;
  cout << "sizeof(pChar) = " << sizeof(pChar) << endl;

  return 0;
}
