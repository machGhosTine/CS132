// **********************************************
// CS132 LAB #2
// Justin Middagh - 2/11/21
// PROGRAM-NAME: Lab2_Program1
// This program will check whether a number is positive, negative, even, or odd and return the result.
//***********************************************

#include <iostream>
using namespace std;

int main() {

    int input;
    cout << "Enter an integer: ";
    cin >> input;

    if (input % 2 == 0 && input > 0){
        cout << input << " is an even, positive number.";}
    else if (input % 2 != 0 && input < 0){
        cout << input << " is an odd, negative number.";}
    else if (input % 2 == 0 && input < 0){
        cout << input << " is an even, negative number.";}
    else if (input % 2 != 0 && input > 0){
        cout << input << " is an odd, positive number.";}
    else{
        cout << "Invalid entry.";}
    return 0;
}
