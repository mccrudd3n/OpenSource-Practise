/* Complie Error: For some strange reasons, I have used all associated lib
and it doesnt recognise `srand(ctime(NULL));`

Will look into this in the future
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int deck[52];

string card_names[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

void swap_cards(int i,int j);
int rand0_to_N(int n);

int main()
{
    //srand(ctime(NULL));

    //init deck
    for(int i = 0; i < 52 ; ++i){
        deck[i] =i;
    }

    //shuffle deck
    for(int i = 51 ;i > 0; --i) {
        int j=rand0_to_N(i);
        swap_cards(i,j);
    }

    //Deal 5 cards

    for (int i=0;i<5; ++i) {
        int j = deck[i] %13;
        cout << card_names[j] << " ";
    }
    cout << endl;
    return 0;

}

void swap_cards(int i, int j)
{
    int temp = deck[i];
    deck[i]= deck[j];
    deck[j] = temp;
}

int rand0_to_N(int n)
{
    return rand() % (n +1);
}
