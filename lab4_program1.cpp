// **********************************************
// CS132 LAB #4
// Justin Middagh - 3/12/21
// PROGRAM-NAME: Lab4_Program1
// This program demonstrates some of the math functions of c++.
//***********************************************

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  cout<< "|-21| = " << abs(-21) << endl;
  cout<< "2^3 = " << pow(2,3) << endl;
  cout<< "A square root of 16 = " << sqrt(16) << endl;
  cout<< "Rounding up 3.5 = " << ceil(3.5) << endl;
  cout<< "Rounding down 3.5 = " << floor(3.5) << endl;
  cout<< "Rounding 3.5 to the nearest integer = " << round(3.5) << endl;
  return 0;
}