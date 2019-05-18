/*

The purpose of the code is just to demonstrate how a class that prohibits creation on the stack can be programmed with the help of a private destructor, as shown in Line 13, and a static function DestroyInstance(), as shown in Lines 16–19, used in main()in Line 32. 

*/

#include <iostream>
using namespace std;

class MonsterDB
{
private:
  ~MosterDM() {}; //private Destructor

public:
  static void DestoryInstance (MonsterDB* pInstance)
  {
    // static member can access private destructor
    delete pInstance;
  }
  // Method B ect....
};

int main()
{
  MonsterDB* pMyDatabase() = new MonsterDB();

   pMyDatabase -> member methods (....);
   // uncomment next line to see compile failure
   // delete pMyDatabase; // private destructor cannot be invoked
   // use static member to deallocate
   MonsterDB::DestroyInstance(pMyDatabase);
   return 0;
}
