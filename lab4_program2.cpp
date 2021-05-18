// **********************************************
// CS132 LAB #4
// Justin Middagh - 3/12/21
// PROGRAM-NAME: Lab4_Program2
// This program will determine the largest number from user inputs.
//***********************************************

#include <iostream>
using namespace std;

double Max(double n1, double n2);
double Max(double n1, double n2, double n3);
double Max(double n1, double n2, double n3, double n4);

int main()
{
    int num;
    double num1, num2, num3, num4;

    cout << "Choose between 2 and 4 numbers: ";
    cin >> num;

    if (num == 2)
    {
        cout << "Enter 2 numbers separated by a space: ";
        cin >> num1 >> num2;

        double largest = Max(num1, num2);

        cout << "largest number is : " << largest << endl;
    }
    else if (num == 3)
    {
        cout << "Enter 3 numbers separated by a space: ";
        cin >> num1 >> num2 >> num3;

        double largest = Max(num1, num2, num3);

        cout << "largest number is : " << largest << endl;
    }
    else if (num == 4)
    {
        cout << "Enter 4 numbers separated by a space: ";
        cin >> num1 >> num2 >> num3 >> num4;

        double largest = Max(num1, num2, num3, num4);

        cout << "largest number is : " << largest << endl;
    }
    else
        cout << "Allowable inputs exceeded! \n";

    return 0;
}
double Max(double n1, double n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}
double Max(double n1, double n2, double n3)
{
    if ((n1 > n2) && (n1 > n3))
        return n1;
    else if ((n2 > n1) && (n2 > n3))
        return n2;
    else if ((n3 > n1) && (n3 > n2))
        return n3;
    else
        cout << "Error: numbers are the same \n";
    return 0;
}
double Max(double n1, double n2, double n3, double n4)
{
    if ((n1 > n2) && (n1 > n3) && (n1 > n4))
        return n1;
    else if ((n2 > n1) && (n2 > n3) && (n2 > n4))
        return n2;
    else if ((n3 > n1) && (n3 > n2) && (n3 > n4))
        return n3;
    else if ((n4 > n1) && (n4 > n2) && (n4 > n3))
        return n4;
    else
        cout << "Error: numbers are the same \n";
    return 0;
}
