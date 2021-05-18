// **********************************************
// CS132 LAB #8
// Justin Middagh - 4/15/21
// PROGRAM-NAME: Lab8_Program3
// This program will create a system for choosing a seat 
// on an airplane. The program will go through all the
// steps in reserving a seat and displaying the results.
//**********************************************

#include <iostream>
using namespace std;

int allSeats(char arr[7][5])
{
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 1; j < 5; j++)
            if (arr[i][j] == 'X')
                count++;
    }
    if (count == 28)
        return 1;
    return 0;
}
void seatDisplay(char arr[7][5])
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return;
}
string getSeat()
{
    string p;
    cout << "\n\nPlease choose a seat by entering the number followed by a letter (for example: 1A/2B) ";
    cin >> p;
    return p;
}
void seatUpdate(char arr[7][5], int row, int col)
{
    cout << "\n\nYou have successfully reserved a seat on the famous Air-Hilbert College.\n\n";
    cout << "The new seating is displayed below:\n";
    cout << "-----------------\n\n";
    arr[row][col] = 'X';
}
int seatCheck(char arr[7][5], string s)
{
    if (s[0] > '7' || s[0] < '1' || s[1] > 'D' || s[1] < 'A')
    {
        cout << "\n\nYou have entered an invalid selection (remember to capitalize your seat letters)";
        return 0;
    }
    int row = -1, col = -1;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i][0] == s[0])
            row = i;
    }
    for (int j = 0; j < 5; j++)
    {
        if (arr[row][j] == s[1])
            col = j;
    }
    if (col == -1)
    {
        cout << "\n\nThis seat is already reserved, please choose again.";
        return 0;
    }
    else
    {
        seatUpdate(arr, row, col);
    }
    return 1;
}
void airHilbert(char arr[7][5])
{
    cout << "\n\nIf you have already chosen a seat, please press X";
    string s;
    while (true)
    {
        s = getSeat();
        if (s[0] == 'X')
            break;
        if (seatCheck(arr, s))
            seatDisplay(arr);
        if (allSeats(arr))
        {
            cout << "\n\nReservation time is over, we are going home for the day. come back tomorrow";
            break;
        }
    }
    cout << "Thank you for choosing Air-Hilbert College, where we have truly amazing students like Justin Middagh.\n";
}
int main()
{
    char arr[7][5];
    for (int i = 0; i < 7; i++)
    {
        arr[i][0] = i + 1 + '0';
        for (int j = 1; j < 5; j++)
        {
            arr[i][j] = 'A' + j - 1;
        }
    }
    cout << "--Welcome to Air-Hilbert College--\n";
    cout << "----------------------------------\n\n";
    cout << "It's time to reserve your seat, they are as follows:\n\n";
    seatDisplay(arr);
    airHilbert(arr);
    return 0;
}