// **********************************************
// CS132 LAB #2
// Justin Middagh
// PROGRAM-NAME: Lab2_Program3
// This program will play "Rock, Paper, and Scissors" with two user inputs and return the winner.
//***********************************************

#include <iostream>
using namespace std;

int main() {
    
    string user1;
    string user2;

    cout << "User1 - Please enter your selection (P, R, or S): ";
    cin >> user1;
    cout << "User2 - Please enter your selection (P, R, or S): ";
    cin>>user2;

    if ((user1 == "P" || user1 == "p") && (user2 == "R" || user2 == "r")){
        cout << "User 1 wins! Paper convers rock.";}
    else if ((user1 == "P" || user1 == "p") && (user2 == "S" || user2 == "s")){
        cout << "User 1 loses! Scissors cuts paper.";}
    else if ((user1 == "P" || user1 == "p") && (user2 == "P" || user2 == "p")){
        cout << "it's a draw.";}
// end user 1 paper section
    else if ((user1 == "S" || user1 == "s") && (user2 == "P" || user2 == "p")){
        cout << "User 1 wins! Scissors cuts paper!";}
    else if ((user1 == "S" || user1 == "s") && (user2 == "R" || user2 == "r")){
        cout << "User 1 loses! Rock breaks scissors.";}
    else if ((user1 == "S" || user1 == "s") && (user2 == "S" || user2 == "s")){
        cout << "it's a draw.";}
// end user 1 scissors section
    else if ((user1 == "R" || user1 == "r") && (user2 == "P" || user2 == "p")){
        cout << "User 1 loses! Paper covers rock.";}
    else if ((user1 == "R" || user1 == "r") && (user2 == "S" || user2 == "s")){
        cout << "User 1 wins! Rock breaks scissors.";}
    else if ((user1 == "R" || user1 == "r") && (user2 == "R" || user2 == "r")){
        cout << "it's a draw.";}
//end player 1 rock selection
    else{
        cout << "Invalid Selection...Goodbye!";}
    return 0;
        
}