// **********************************************
// CS132 LAB #6
// Justin Middagh - 4/1/21
// PROGRAM-NAME: Lab6_Program1
// This program will search a file of numbers of type int and write the largest number,
// the smallest numbers, and the average of all numbers to the screen.
//**********************************************

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream fi;
    fi.open("Lab6_1data.txt");
    int minimum = 1001;
    int maximum = 0;
    int n;
    int count = 0;
    double total = 0;
    while (fi >> n)
    {
        count++;
        total += n;
        if (n < minimum)
            minimum = n;
        if (n > maximum)
            maximum = n;
    }
    cout << "Max: " << maximum << endl;
    cout << "Min: " << minimum << endl;
    cout << "Average: " << total / count << endl;
    return 0;
}