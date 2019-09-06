#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.14 Safer Pointer Programming, a Correction of Listing 8.13" << endl;
  cout << "----------------------------------------------------------" << endl;

  cout << "Is it sunny outside? (Y/N)" << endl;
  cout << " >> ";
  char UserInput = 'y';
  cin >> UserInput;
  if (UserInput == 'y')
    {
      //Pointer Initialised
      int* pTempreture = new int;
      *pTempreture = 30;

      cout << "Tempreture is: " << *pTempreture;

      //Done using pointer? Delete.
      delete pTempreture;

    }


  return 0;
}
