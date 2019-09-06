#include <iostream>

using namespace std;

class MyString
{
private:
  char* Buffer;
public:
  //Constructor
  MyString (const char* InitialInput)
  {
    cout << "Constructor: Creating new MyString " << endl;
    if(InitialInput != NULL)
    {
      Buffer = new char [strlen(InitialInput) + 1];
      strcpy(Buffer, InitialInput);

      //Display Memory address
      cout << "Buffer Points to: " << hex << (unsigned int*)Buffer << endl;
    }
    else
    Buffer = NULL;
  }
  //Copy Constructor
  MyString(const MyString& CopySource)
  {
    cout << "Copying Constructor: Copying MyString" << endl;
    if(CopySource.Buffer != NULL)
    {
      //Ensure deep copy by first allocating own buffer
      Buffer = new char [strlen(CopySource.Buffer)+1];

      //Copy from the source into the Local buffer
      strcpy(Buffer, CopySource.Buffer);

      //Display Memory Address pointed by local Buffer
      cout << "Buffer points to : " << hex << (unsigned int*)Buffer << endl;
    }
    else
    Buffer = NULL;
  }
  //Destructor
  ~MyString()
  {
    cout << "Invoking Destructor; Cleaning Up " << endl;
    if (Buffer != NULL)
    delete [] Buffer;
  }
  int GetLegth()
  {
    return strlen(Buffer);
  }

  const char* GetString()
  {
    return Buffer;
  }
};

void UseMyString (MyString Input)
{
  cout << "String Buffer in MyString is " << Input.GetLegth() << " characters" << endl;
  cout << "Buffer contains " << Input.GetString() << endl;
  return;
}

int main()
{
  MyString SayHello ("Hellow from the String Class");
  //Pass SayHello by value (will be copied)
  UseMyString("SayHello");

  return 0;
}
