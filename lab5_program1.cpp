// **********************************************
// CS132 LAB #5
// Justin Middagh - 3/25/21
// PROGRAM-NAME: Lab5_Program1
// This program will extract characters if it is a number, calculates the sum of all those numbers and stop if a newline is encountered.
//***********************************************

#include <iostream>
using namespace std;

int main()
{
    char c;
    int sum = 0;

    cout << "Enter any text: ";
    while (c != '\n')
    {
        cin.get(c);
        if (isdigit(c))
        {
            cout << c << " ";
            sum = sum + (int)c - 48;
        }
    }
    cout << "\nSum of all the digits is: " << sum;
    return 0;
}