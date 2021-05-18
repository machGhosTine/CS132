// **********************************************
// CS132 LAB #9
// Justin Middagh - 4/22/21
// PROGRAM-NAME: Lab9_Program1
// This program will determine if a word is a palindrome.
//**********************************************

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char *cstr)
{
    char *front = cstr;
    char *back = cstr + strlen(cstr) - 1;

    while (front < back)
    {
        if (*front != *back)
            return false;
        front++;
        back--;
    }
    return true;
}

int main()
{
    char charString[100];
    cout << "Enter a word to determine if it is a palindrome: ";
    gets(charString);
    if (isPalindrome(charString))
        cout << charString << " has been analyzed - it is a palindrome." << endl;
    else
        cout << charString << " has been analyzed - it is not a palindrome." << endl;
}