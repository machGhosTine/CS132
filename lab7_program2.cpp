// **********************************************
// CS132 LAB #7
// Justin Middagh - 4/13/21
// PROGRAM-NAME: Lab7_Program2
// This program will create an array of 20 random numbers between 1 and 100, prints the numbers in an array,
// prints the numbers in reverse in the array, and prints the min/max values in the array.
//**********************************************

#include <iostream>
#include <ctime>
using namespace std;

void printArray(int array[], int size);
void printArrayReverse(int array[], int size);
int max(int array[], int size);
int min(int array[], int size);
#define SIZE 20

int main()
{
    int array[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
        array[i] = rand() % 100 + 1;
    cout << "Random Array: ";
    printArray(array, SIZE);
    cout << "Random Array in reverse order: ";
    printArrayReverse(array, SIZE);
    cout << "Max value of an array: " << max(array, SIZE) << endl;
    cout << "Min value of an array: " << min(array, SIZE) << endl;
    return 0;
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void printArrayReverse(int array[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int max(int array[], int size)
{
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}
int min(int array[], int size)
{
    int min = array[0];
    for (int i = 0; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}
