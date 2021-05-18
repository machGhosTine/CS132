// **********************************************
// CS132 LAB #7
// Justin Middagh - 4/13/21
// PROGRAM-NAME: Lab7_Program3
// This program will read the integers from "Lab7_3_input.txt" and print them in two column format.
// The first column is the elements in the array, the second is the count of each.
//**********************************************

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n = 0, count, arr[50], i = 0, j, input;
    char x[50];
    {
        ifstream lab7File("Lab7_3_input.txt");
        while (lab7File >> arr[i])
        {
            n++;
            i++;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "\nN\tCount\n";
    for (i = 0; i < n; i++)
    {
        count = 1;
        while (arr[i] == arr[i + 1] && i < n)
        {
            count++;
            i++;
        }
        cout << arr[i] << "\t" << count << endl;
    }
    return 0;
}