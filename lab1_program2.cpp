// **********************************************
// CS132 LAB #1
// Justin Middagh - 2/10/21
// Lab 1: Program 2
// This program will calculate the area, diameter, and circumference of a circle with a given radius.
//***********************************************

#include <iostream>
using namespace std;

int main() {
    float pi, radius, area, diameter, circumference;
    pi = 3.14;
    cout << "Enter a value for the radius of a circle:\n";
    cin >> radius;
    area = pi * radius * radius;
    diameter = 2 * radius;
    circumference = 2 * pi * radius;
    cout << "Area of the circle: " << area << endl;
    cout << "Diameter of the circle: " << diameter << endl;
    cout << "Circumference of the circle: " << circumference << endl;
      
    return 0;
}