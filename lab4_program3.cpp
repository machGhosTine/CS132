// **********************************************
// CS132 LAB #4
// Justin Middagh - 3/12/21
// PROGRAM-NAME: Lab4_Program3
// This program will generate 10 random numbers between a given min and max.
//***********************************************

#include <iostream>
using namespace std;

int getRand(int min, int max)
{
    return min + rand() % (max - min + 1);
}

int main()
{
    int min, max;
    cout << "Enter the min and max of the random number: ";
    cin >> min >> max;
    cout << "Generating 10 random numbers..." << endl;

    for (int i = 0; i < 10; i++)
        cout << getRand(min, max) << " ";
}