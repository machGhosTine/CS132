// **********************************************
// CS132 LAB #8
// Justin Middagh - 4/15/21
// PROGRAM-NAME: Lab8_Program1
// This program will read a list of 30 fruits from the file “fruits.txt”, 
// insert them into string array, and sort the array in alphabetical order. 
//**********************************************

#include <iostream>
#include <fstream>
using namespace std;

void fruitSort(string s[], int size)
{

    string temp = "";

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < (size - i); j++)
        {

            if (s[j - 1] > s[j])
            {
                temp = s[j - 1];
                s[j - 1] = s[j];
                s[j] = temp;
            }
        }
    }
}
int main()
{
    string fruits[30];

    ifstream myReadFile;
    myReadFile.open("fruit.txt");
    string s;
    int count = 0;
    if (myReadFile.is_open())
    {
        while (!myReadFile.eof())
        {

            myReadFile >> s;
            fruits[count++] = s;
        }
    }
    cout << "Before Sorting: " << endl;
    for (int i = 0; i < 30; i++)
    {
        cout << fruits[i] << " ";
    }
    cout << endl;

    fruitSort(fruits, 30);
    cout << "After Sorting: " << endl;
    for (int i = 0; i < 30; i++)
    {
        cout << fruits[i] << " ";
    }
    cout << endl;
    myReadFile.close();
    return 0;
}