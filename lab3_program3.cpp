// **********************************************
// CS132 LAB #3
// Justin Middagh - 3/4/21
// PROGRAM-NAME: Lab2_Program3
// This program will determine the address the Riddler will strike using mathematical computations.
//***********************************************

#include <iostream>
using namespace std;

int main()
{
    int one, ten, hundred, thousand;

    for (int i = 1001; i <= 9999; i = i + 2)
    {
        one = i % 10;
        ten = i / 10 % 10;
        hundred = i / 100 % 10;
        thousand = i / 1000 % 10;

        if (thousand != (ten * 3))
            continue;
        if (thousand != hundred && thousand != ten && thousand != one && hundred != ten && hundred != one && ten != one)
        {
            if (((thousand + hundred + ten + one) == 27))
            {
                cout << "Justin Middagh has beaten the Riddler! He will be found at: " << i << " Pennsylvania Ave! Go Batman!\n";
                break;
            }
        }
    }
    return 0;
}