// **********************************************
// CS132 LAB #2
// Justin Middagh
// PROGRAM-NAME: Lab2_Program2
// This program will verify the correct password was entered.
//***********************************************

#include <iostream>
using namespace std;

int main() {

    string pass = "1123";
    string exit = "-1";
    string input;

    cout << "Enter the password (or -1 to exit): ";
    cin >> input;
    
    while (true){
    if (input==pass){
        cout << "Password is correct." << endl;
        break;}
        if (input == exit){
            cout << "You exit the program." << endl;
            break;}
    else{
        cout << "Password is incorrect." << endl;}
    return 0;}
}