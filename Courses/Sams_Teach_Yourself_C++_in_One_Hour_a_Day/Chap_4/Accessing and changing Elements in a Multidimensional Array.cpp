#include <iostream>

int Array()
{
    using namespace std;
    // Defined the 3*3 Array
    int ThreeRowsThreeColumns [3][3] = {{-501, 206, 2011}, {989, 101, 206}, {303, 456, 596}};

    //Print the full table
    cout << "Row 0: " << ThreeRowsThreeColumns [0][0] << " " << ThreeRowsThreeColumns [0][1] << " " << ThreeRowsThreeColumns [0][2] << endl;
    cout << "Row 1: " << ThreeRowsThreeColumns [1][0] << " " << ThreeRowsThreeColumns [1][1] << " " << ThreeRowsThreeColumns [2][2] << endl;
    cout << "Row 2: " << ThreeRowsThreeColumns [2][0] << " " << ThreeRowsThreeColumns [2][1] << " " << ThreeRowsThreeColumns [2][2] << endl;

    //As the user which element to change
    cout << "Which data element do you want to change?" << endl;

    //Defined row and colum to allow the formulation of the change
    int row =0;
    int column=0;

    // Data assignment section
    cout << "Please select which row" <<endl;
    cin >> row;
    cout << "Please select which coloum" << endl;
    cin >> column;
    cout << "Entre New Data for specified element" << endl;
    cin >> ThreeRowsThreeColumns [row][column];

    //Print new table
    cout << "Row 0: " << ThreeRowsThreeColumns [0][0] << " " << ThreeRowsThreeColumns [0][1] << " " << ThreeRowsThreeColumns [0][2] << endl;
    cout << "Row 1: " << ThreeRowsThreeColumns [1][0] << " " << ThreeRowsThreeColumns [1][1] << " " << ThreeRowsThreeColumns [2][2] << endl;
    cout << "Row 2: " << ThreeRowsThreeColumns [2][0] << " " << ThreeRowsThreeColumns [2][1] << " " << ThreeRowsThreeColumns [2][2] << endl;
    cout << endl;
    cout << "You have changed row " << row << " and column " << column << " to " << ThreeRowsThreeColumns [row][column] <<endl;

}


int main()
{
    using namespace std;

    cout << "This function presents a methed of Accessing Elements in a Multidimensional Array" << endl;
    cout << endl; // Extra space so that its easy readable

    //Functions are Invoked here
    Array();

    return 0;
}
