// **********************************************
// CS132 LAB #5
// Justin Middagh - 3/25/21
// PROGRAM-NAME: Lab5_Program3
// This program will calculate grades based on given numbers and return both letter and number n_grade.
//***********************************************

#include <iostream>
using namespace std;

int main()
{
    double n_assignment = 0, n_labs = 0, n_midterm = 0, n_exam = 0;
    double n_score = 0.0;
    char n_grade;
    
    cout << "Enter your assignment score: ";
    cin >> n_assignment;
    cout << "Enter your lab score: ";
    cin >> n_labs;
    cout << "Enter your midterm score: ";
    cin >> n_midterm;
    cout << "Enter your exam exam score: ";
    cin >> n_exam;

    n_score = ((n_assignment / 100) * 20) + ((n_labs / 100) * 20) + ((n_midterm / 100) * 30) + ((n_exam / 100) * 30);

    if (n_score >= 90 && n_score <= 100)
        n_grade = 'A';
    else if (n_score >= 80 && n_score <= 89)
        n_grade = 'B';
    else if (n_score >= 70 && n_score <= 79)
        n_grade = 'C';
    else if (n_grade >= 60 && n_grade <= 69)
        n_grade = 'D';
    else
        n_grade = 'F';

    cout << "Your total score is " << n_score << " and your grade is " << n_grade << endl;
}