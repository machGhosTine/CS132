// **********************************************
// CS132 LAB #3
// Justin Middagh - 3/4/21
// PROGRAM-NAME: Lab2_Program2
// This is the game of 23 toothpicks, player and computer choose toothpicks until the winner is found.
//***********************************************

#include <iostream>
using namespace std;

int main()
{
    int toothpicks;
    int player = 0;
    int computer = 0;
    char choice;
    do
    {
        toothpicks = 23;

        while (toothpicks > 0)
        {
            cout << "Choose between 1 and 3 toothpicks: ";
            cin >> player;

            while (player < 1 || player > 3 || player > toothpicks)
            {
                if (player > 3 || player < 1)
                {
                    cout << "Error, you can only pick between 1 and 3, pick again: ";
                    cin >> player;
                }
                else
                {
                    cout << "Not enough toothpicks remaining ";
                    cin >> player;
                }
            }
            toothpicks = toothpicks - player;
            cout << "Player chooses: " << player << " stick(s). " << toothpicks << " toothpicks left" << endl;

            if (toothpicks == 0)
            {
                cout << "Player picked the last toothpick - Player wins!" << endl;
                cout << endl;
                break;
            }
            if (toothpicks > 4)
            {
                computer = 4 - player;
            }
            else if (toothpicks == 1)
            {
                computer = toothpicks;
            }
            else
            {
                computer = toothpicks - 1;
            }
            toothpicks = toothpicks - computer;
            cout << "Computer chooses: " << computer << " stick(s). " << toothpicks << " toothpicks left" << endl;
            cout << endl;

            if (toothpicks == 0)
            {
                cout << "Computer picked the last toothpick - Computer wins!" << endl;
                cout << endl;
                break;
            }
            cout << "Your turn. ";
        }
        cout << "Would you like to play this awesome game again? (Y/N) ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}