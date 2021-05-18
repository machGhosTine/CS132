// **********************************************
// CS132 LAB #9
// Justin Middagh - 4/29/21
// PROGRAM-NAME: Lab10_Program1
// This program will asks user’s first name, last name, and dateMain of birth, 
// and stores the information in the structure data type ‘Person’, and returns
// the data to the screen.
//**********************************************

#include <iostream>
using namespace std;

struct dateMain
{
    int year, month, day;
};

struct Person
{
    string firstName, lastName;
    dateMain dobMain;
    int age;
};

int main()
{
    Person p;
    dateMain today = {2021, 4, 29};

    cout << "Please enter your first name : ";
    cin >> p.firstName;

    cout << "Please enter your last name : ";
    cin >> p.lastName;

    cout << "Please enter your birth year : ";
    cin >> p.dobMain.year;

    cout << "Please enter the numerical day of birth : ";
    cin >> p.dobMain.day;

    cout << "Please enter your birth month (in number format) : ";
    cin >> p.dobMain.month;
    cout << endl;

    p.age = today.year - p.dobMain.year - 1;

    cout << "Name : " << p.firstName << " " << p.lastName << endl;
    cout << "Age : " << p.age << endl;
    return 0;
}