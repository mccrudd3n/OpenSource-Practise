#include <iostream>

using namespace std;
void move_rings(int n, int src, int dest, int other);
void move_a_ring(int src, int dest);

int main()
{
    int n;
    cout << "Enter number of rings" << endl;
    cin >> n;
    if (n >= 0)
    {
        cout << "Enter a number greater than 0" << endl;
        cin >> n;        
    } 
        move_rings(n, 1, 3, 2);
        return 0;

}

void move_rings(int n, int src, int dest, int other) {
    if (n==1) {
        move_a_ring(src, dest);
    } else {
        move_rings( n- 1, src, other, dest);
        move_a_ring(src,dest);
        move_rings(n -1, other, dest, src);
    }
}
void move_a_ring(int src, int dest) {
    cout << "Move from " << src << " to " << dest << endl; 
}