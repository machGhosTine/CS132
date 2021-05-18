// **********************************************
// CS132 LAB #1
// Justin Middagh - 2/10/21
// Lab 1: Program 3
// This program will return the correct change in USD coins from the difference in two values, similar to a vending machine.
//***********************************************

#include <iostream>
using namespace std;

int main() {
    float paid, purchased, change;
    int quarters, dimes, nickels, pennies;
    cout << "Please enter total paid amount: \n";
    cin >> paid;
    cout << "Please enter total purchased amount: \n";
    cin >> purchased;
    change = paid - purchased;
    quarters = change / .25;
    change -= quarters * .25;
    dimes = change / .10;
    change -= dimes * .10;
    nickels = change / .05;
    change -= nickels * .05;
    pennies = change / .01;
  
  if (pennies > 0) {  // I am using this if statement because I keep getting one less penny in the return calculations,
		pennies += 1; // and this if statement fixes that issue.
	}
  
    cout << "Quarters: " << quarters <<endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

}
