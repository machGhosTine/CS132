// **********************************************
// CS132 LAB #9
// Justin Middagh - 4/29/21
// PROGRAM-NAME: Lab10_Program2
// This program will return the classification of two movies,
// (toy story and interstellar), using the class structure.
//**********************************************

#include <iostream>
using namespace std;

class Movie
{

public:
    Movie()
    {
        peopleRate1 = 0;
        peopleRate2 = 0;
        peopleRate3 = 0;
        peopleRate4 = 0;
        peopleRate5 = 0;
    }

    Movie(string movieName, string movieRating)
    {
        movieTitle = movieName;
        MPAARate = movieRating;
        peopleRate1 = 0;
        peopleRate2 = 0;
        peopleRate3 = 0;
        peopleRate4 = 0;
        peopleRate5 = 0;
    }

    void setMovieTitle(string movieName)
    {
        movieTitle = movieName;
    }

    void setMPAArate(string movieRating)
    {
        MPAARate = movieRating;
    }

    string getMovieTitle()
    {
        return movieTitle;
    }

    string getMPAARating()
    {
        return MPAARate;
    }

    void addRating(int movieRating)
    {
        if (movieRating == 1)
            peopleRate1++;
        else if (movieRating == 2)
            peopleRate2++;
        else if (movieRating == 3)
            peopleRate3++;
        else if (movieRating == 4)
            peopleRate4++;
        else
            peopleRate5++;
    }

    double getAverage()
    {
        return (peopleRate1 * 1 + peopleRate2 * 2 + peopleRate3 * 3 + peopleRate4 * 4 + peopleRate5 * 5) / 5.0;
    }

private:
    string movieTitle;
    string MPAARate;
    int peopleRate1;
    int peopleRate2;
    int peopleRate3;
    int peopleRate4;
    int peopleRate5;
};

int main()
{
    Movie m1("Interstellar", "PG-13");
    Movie m2("Toy Story 3", "G");
    m1.addRating(4);
    m1.addRating(5);
    m1.addRating(3);
    m1.addRating(4);
    m1.addRating(5);
    m2.addRating(3);
    m2.addRating(4);
    m2.addRating(3);
    m2.addRating(2);
    m2.addRating(4);
    m2.addRating(3);

    cout << "Movie Title: " << m1.getMovieTitle() << endl;
    cout << "MPAA Rating: " << m1.getMPAARating() << endl;
    cout << "Average User Rating: " << m1.getAverage() << endl;
    cout << endl;

    cout << "Movie Title: " << m2.getMovieTitle() << endl;
    cout << "MPAA Rating: " << m2.getMPAARating() << endl;
    cout << "Average User Rating: " << m2.getAverage() << endl;
    return 0;
}