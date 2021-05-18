// **********************************************
// CS132 LAB #2
// Justin Middagh
// PROGRAM-NAME: Lab2_Program4
// This program will return the astrological sign from the date given, along with displaying additional text based on "cusp" birthdays.
//***********************************************

#include <iostream>
using namespace std;

int main() {

    int month, day;

    cout << "Please enter your birthday (month and day, separated by a space): ";
    cin >> month >> day;
    
    if ((month == 1 && day >= 20 && day <= 31) || (month == 2 && day <=18)){
        cout << "Your Horoscope Sign -> AQUARIUS";
        if (month == 2 && day >= 15 && day <= 17)
            cout << " / You are also on a cusp! Your nearest sign -> PISCES";}
    else if ((month == 2 && day >= 19 && day <= 28) || (month == 3 && day <= 20)){
        cout << "Your Horoscope Sign -> PISCES";
        if (month == 3 && day >= 17 && day <= 19)
            cout << " / You are also on a cusp! Your nearest sign -> ARIES";}
    else if ((month == 3 && day >= 21 && day <= 31) || (month == 4 && day <= 19)){
        cout << "Your Horoscope Sign -> ARIES";
        if (month == 4 && day >= 16 && day <= 18)
            cout << " / You are also on a cusp! Your nearest sign -> TAURUS";}
    else if ((month == 4 && day >= 20 && day <= 31) || (month == 5 && day <= 20)){
        cout << "Your Horoscope Sign -> TAURUS";
        if (month == 5 && day >= 17 && day <= 19)
            cout << " / You are also on a cusp! Your nearest sign -> GEMINI";}
    else if ((month == 5 && day >= 21 && day <= 31) || (month == 6 && day <= 20)){
        cout << "Your Horoscope Sign -> GEMINI (so is the author of this program!)";
        if (month == 6 && day >= 17 && day <= 19)
            cout << " / You are also on a cusp! Your nearest sign -> CANCER";}
    else if ((month == 6 && day >= 21 && day <= 30) || (month == 7 && day <= 22)){
        cout << "Your Horoscope Sign -> CANCER";
        if (month == 7 && day >= 19 && day <= 21)
            cout << " / You are also on a cusp! Your nearest sign -> LEO";}
    else if ((month == 7 && day <= 23 && day <= 31) || (month == 8 && day <= 22)){
        cout << "Your Horoscope Sign -> LEO";
        if (month == 8 && day >= 19 && day <= 21)
            cout << " / You are also on a cusp! Your nearest sign -> VIRGO";}
    else if ((month == 8 && day >= 23 && day <= 31) || (month == 9 && day <= 22)){
        cout << "Your Horoscope Sign -> VIRGO";
        if (month == 9 && day >= 19 && day <= 21)
            cout << " / You are also on a cusp! Your nearest sign -> LIBRA";}
    else if ((month == 9 && day >= 23 && day <= 30) || (month == 10 && day <= 22)){
        cout << "Your Horoscope Sign -> LIBRA";
        if (month == 10 && day >= 19 && day <= 21)
            cout << " / You are also on a cusp! Your nearest sign -> SCORPIO";}
    else if ((month == 10 && day >= 23 && day <= 31) || ( month == 11 && day <= 21)){
        cout << "Your Horoscope Sign -> SCORPIO";
        if (month == 11 && day >= 18 && day <= 20)
            cout << " / You are also on a cusp! Your nearest sign -> SAGUITTARIUS";}
    else if ((month == 11 && day >= 22 && day <= 30) || ( month == 12 && day <= 21)){
        cout << "Your Horoscope Sign -> SAGUITTARIUS";
        if (month == 12 && day >= 18 && day <= 20)
            cout << " / You are also on a cusp! Your nearest sign -> CAPRICORN";}
    else if ((month == 12 && day >= 22 && day <= 31) || ( month == 1 && day <= 19 )){
        cout << "Your Horoscope Sign -> CAPRICORN";
        if (month == 1 && day >= 16 && day <= 19)
            cout << " / You are also on a cusp! Your nearest sign -> AQUARIUS";}
    else{
        cout << "Invalid Birthday...Good Bye!";}
    return 0;  
}