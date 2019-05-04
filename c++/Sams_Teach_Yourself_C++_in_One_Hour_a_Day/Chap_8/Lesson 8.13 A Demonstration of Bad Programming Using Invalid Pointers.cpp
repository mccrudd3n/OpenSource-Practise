#include <iostream>

using namespace std;

int main ()
{
  cout << endl; //Extra space
  cout << "__________________________________________________________" << endl;
  cout << "Lesson 8.13 A Demonstration of Bad Programming Using Invalid Pointers" << endl;
  cout << "----------------------------------------------------------" << endl;

  //Unintiliased Pointer (To advoid*****)
  int* pTemp;

  cout << "Is it sunny outside? " << endl;
  cout << " >> ";
  char UserInput = 'y';
  cin >> UserInput;
  if (UserInput == 'y')
    {
      pTempreture = new int;
      *pTempreture = 30;
    }
  //pTemp contains invalid alue if user entered 'n'
  cout << "Tempreture is: " << *pTempreture;

  //delete also being invoked for those cases new wasn’t done
  delete pTempreture;

  return 0;
}
