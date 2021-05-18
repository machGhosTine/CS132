// **********************************************
// CS132 LAB #8
// Justin Middagh - 4/15/21
// PROGRAM-NAME: Lab8_Program2
// This program will extract the words inside the parentheses
// from the text, and store the words into a vector.
//**********************************************

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream fin("Lab8_2data.txt");
    string text;
    vector<string> word;

    if (fin.fail())
    {
        cout << "Unable to open file." << endl;
        return -1;
    }

    getline(fin, text);

    int i = 0;
    int startPosition;
    int endPosition;
    string substr;
    int length;

    while (i < text.size())
    {
        startPosition = text.find("(", i);
        endPosition = text.find(")", i + 1);
        length = endPosition - startPosition - 1;

        substr = text.substr(startPosition + 1, length);

        word.push_back(substr);

        i = i + endPosition;
    }

    cout << "Text: " << text << endl;
    cout << "Entracted word: ";
    for (int i = 0; i < word.size() - 1; ++i)
    {
        cout << word[i] << ", ";
    }
    cout << word[word.size() - 1] << endl;

    fin.close();

    return 0;
}