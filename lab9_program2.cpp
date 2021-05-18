// **********************************************
// CS132 LAB #9
// Justin Middagh - 4/22/21
// PROGRAM-NAME: Lab9_Program2
// This program will add and remove names from a dynamic array (list) without user intervention.
//**********************************************

#include <iostream>
#include <string>
using namespace std;

string *insertItem(string *dynamicArray, int &size, string newItem)
{
    string *d = new string[size + 1];
    for (int i = 0; i < size; i++)
    {
        *(d + i) = *(dynamicArray + i);
    }
    *(d + size) = newItem;
    delete[] dynamicArray;
    size += 1;
    return d;
}

string *removeItem(string *dynamicArray, int &size, string deletedItem)
{
    int matches = 0;
    for (int i = 0; i < size; i++)
    {
        if ((*(dynamicArray + i)).compare(deletedItem) == 0)
            matches++;
    }

    string *d = new string[size - matches];
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if ((*(dynamicArray + i)).compare(deletedItem) != 0)
        {
            *(d + index) = *(dynamicArray + i);
            index++;
        }
        size = size - matches;
        return d;
    }
}

int main()
{
    int size = 3;
    string *dynamicArray = new string[size];
    *(dynamicArray + 0) = "Apollo";
    *(dynamicArray + 1) = "Zeus";
    *(dynamicArray + 2) = "Poseidon";

    cout << "The first three names in the list are below:\n";
    for (int i = 0; i < size; i++)
        cout << *(dynamicArray + i) << endl;

    string *d = insertItem(dynamicArray, size, "Hercules");
    cout << "\nAdded the name Hercules to the list, the list size is now: " << size << endl;
    cout << "below is the new list:\n";
    for (int i = 0; i < size; i++)
        cout << *(d + i) << endl;

    string *p = insertItem(d, size, "Medusa");
    cout << "\nAdded the name Medusa to the list, the list size is now: " << size << endl;
    cout << "below is the new list:\n";
    for (int i = 0; i < size; i++)
        cout << *(p + i) << endl;

    string *np = removeItem(p, size, "Medusa");
    cout << "\nRemoved the name Medusa, the list size is now: " << size << endl;
    cout << "below is the new (final) list:\n";
    for (int i = 0; i < size; i++)
        cout << *(p + i) << endl;
    return 0;
}