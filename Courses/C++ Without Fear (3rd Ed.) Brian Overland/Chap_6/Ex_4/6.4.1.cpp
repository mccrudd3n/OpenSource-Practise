#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int deck[52];

string card_names[] = {"Ace", "two", "three", "four", "five", "six", "sevem", "eight", "nine", "ten", "Jack", "Queen", "King"};

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
