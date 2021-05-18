// **********************************************
// CS132 LAB #6
// Justin Middagh - 4/1/21
// PROGRAM-NAME: Lab6_Program2
// This program will compute numeric grades for a course from a data set.
//***********************************************

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void calculation(ifstream &, ofstream &);

int main()
{
    ifstream in;
    ofstream out;

    in.open("Lab6_2data.txt");
    if (in.fail())
    {
        cout << "A file error has ocurred." << endl;
        system("pause");
        return 1;
    }
    out.open("Lab6_2output.txt");
    calculation(in, out);
    out.close();
    in.close();
    system("pause");
    return 0;
}

void calculation(ifstream &in, ofstream &out)
{
    int i, sum, a[100];
    string first, last;
    double avg;
    in >> first;
    while (in)
    {
        sum = 0;
        in >> last;
        for (i = 0; i < 10; i++)
        {
            in >> a[i];
            sum += a[i];
        }
        out << first << " " << last << " ";
        for (i = 0; i < 10; i++)
            out << a[i] << " ";
        avg = sum / 10.;
        out << avg << endl;
        in >> first;
    }
}
