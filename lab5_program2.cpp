// **********************************************
// CS132 LAB #5
// Justin Middagh - 3/25/21
// PROGRAM-NAME: Lab5_Program2
// This program will take a number as an input and reverse it as output.
//***********************************************

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter number to be reversed : ";
    cin >> number;

    int r_number = 0;

    while (number > 0)
    {
        int n = number % 10;
        r_number = r_number * 10 + n;
        number = number / 10;
    }
    cout << "The reversed number is : " << r_number;
}