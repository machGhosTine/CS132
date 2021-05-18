// **********************************************
// CS132 LAB #6
// Justin Middagh - 4/1/21
// PROGRAM-NAME: Lab6_Program3
// This program will search for a name of a boy or a girl and determine its rank from the data set.
//***********************************************

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> boy_names;
    vector<string> girl_names;
    ifstream name_file("babyname2012.txt");

    int rank;
    string boy, girl;
    while (name_file >> rank >> boy >> girl)
    {
        boy_names.push_back(boy);
        girl_names.push_back(girl);
    }
    name_file.close();

    cout << "Enter the name of a boy or a girl that the program will search for: ";
    string bg_name;
    cin >> bg_name;

    vector<string>::iterator it;

    it = find(boy_names.begin(), boy_names.end(), bg_name);
    if (it != boy_names.end())
    {
        int pos = it - boy_names.begin();
        cout << bg_name << " is ranked " << pos << " in popularity among boys.\n";
    }
    else
    {
        cout << bg_name << " is not ranked among the top 1000 boys.\n";
    }

    it = find(girl_names.begin(), girl_names.end(), bg_name);
    if (it != girl_names.end())
    {
        int pos = it - girl_names.begin();
        cout << bg_name << " is ranked " << pos << " in popularity among girls.";
    }
    else
    {
        cout << bg_name << " is not ranked among the top 1000 girls.";
    }
    cout << endl;

    return 0;
}
