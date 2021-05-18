// Lab 0: Program 4 (P14.cpp)
// Written by: Justin Middagh 
// Date: 1/28/2021 

#include <iostream>
using namespace std; 

int main() {
    int cases_per_day, bottles_per_day;
    int bottles_per_case = 12;
    double profit_per_bottle = 0.22; // 22 Cents per bottle profit_per_bottle
    double profit_per_day, profit_per_year, profit_per_10_years, bottles_sold;

    cout << "Press enter after entering each number \n";
    cout << "Enter number of cases \n";
    cin >> cases_per_day;

    profit_per_day = cases_per_day * bottles_per_case * profit_per_bottle;
    profit_per_year = 365 * profit_per_day;
    profit_per_10_years = profit_per_year * 10;
    bottles_sold = bottles_per_case * cases_per_day;

    cout << "The Store has made: ";
    cout << profit_per_day;
    cout << " per day. \n";
    cout << "The number of bottles sold is: ";
    cout << bottles_sold << endl;
    cout << "That means the profit for one year will be: ";
    cout << profit_per_year << endl;
    cout << "That means the profit for 10 years will be: ";
    cout << profit_per_10_years << endl;
    
    cout << "Good Business?! \n";
    return 0; 

} 
