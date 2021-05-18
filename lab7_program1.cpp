// **********************************************
// CS132 LAB #7
// Justin Middagh - 4/13/21
// PROGRAM-NAME: Lab7_Program1
// This program will insert 10 numbers into an array and calculates the average of even/odd
// elements of the created array.  In addition, it will print the array values to screen.
//**********************************************

#include <iostream>
using namespace std;

void printArray(int[]);
const int SIZE = 10;

int main()
{
    int array[SIZE];
    int i;
    double average = 0;
    cout << "\nEnter 10 numbers (separated by a space): ";
    for (i = 0; i < SIZE; i++)
    {
        cin >> array[i];
    }

    printArray(array);
    cout << "\nAverage of even elements: ";

    for (i = 0; i < SIZE; i = i + 2)
    {
        average = average + array[i];
    }
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << average / 5;
    average = 0;
    cout << "\nAverage of odd elements: ";
    for (i = 1; i < SIZE; i = i + 2)
    {
        average = average + array[i];
    }
    cout << average / 5;
    return 0;
}

void printArray(int a[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        cout << "\narray[" << i << "]: " << a[i];
    }
}