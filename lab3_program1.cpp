// **********************************************
// CS132 LAB #3
// Justin Middagh - 3/4/21
// PROGRAM-NAME: Lab2_Program1
// This program will take a character input and a number of lines and create a ascending pyramid.
//***********************************************

#include <iostream>
using namespace std;

int main()
{
    int rows;
    char selection;

    cout << "Enter one character for the blocks of pyramid: ";
    cin >> selection;

    cout << "Enter number of levels of pyramid: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << selection;
        }
        cout << "\n";
    }
    return 0;
}