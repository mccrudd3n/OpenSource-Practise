#include <iostream>
using namespace std;

class MyString
{
private:
  char* Buffer;

public:
  //Constructor
  MyString(const char* InitialInput)
  {
    if (InitialInput != NULL)
    {
      Buffer = new char [strlen(InitialInput) + 1 ];
      strcpy(Buffer, InitialInput);
    }
    else
      Buffer = NULL;
  }
  //Destructor: clears the buffer allocated Constructor
  ~MyString()
  {
    cout << "Invoking destructor, Clearing up" << endl;
    if (Buffer != NULL )
      delete [] Buffer;
  }
  int GetLength()
  {
    return strlen(Buffer);
  }
  const char* GetString()
  {
    return Buffer;
  }

};

int main()
{
  MyString SayHello("Hello from String Class");
  cout << "String Buffer in MyString is " << SayHello.GetLength();
  cout << " characters long " << endl;

  cout << "Buffer contains: ";
  cout << "Buffer contains: " << SayHello.GetString() << endl;

}
