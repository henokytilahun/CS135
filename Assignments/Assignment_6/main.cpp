#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void displayCrossword();

int getLevelInput(string prompt);

bool checkInput(int input);

int main()
{

    std::ifstream reader;
    string prompt1 = "Enter level to play:\n";

    int level = getLevelInput(prompt1);

    while (checkInput(level) == false)
    {
        if (cin.fail() || level < 1)
        {
            cout << "\nError: Invalid Input!\n";
            cin.clear();
            cin.ignore(100, '\n');
            level = getLevelInput(prompt1);
            checkInput(level);
        }
    }

    reader.open("level" + std::to_string(level) + ".txt");

    while (!reader)
    {
        if (!reader)
        {
            cout << "Level files could not be found!\n";
            cin.clear();
            cin.ignore(100, '\n');
            level = getLevelInput(prompt1);
            checkInput(level);
            while (checkInput(level) == false)
            {
                if (cin.fail() || level < 1)
                {
                    cout << "\nError: Invalid Input!\n";
                    cin.clear();
                    cin.ignore(100, '\n');
                    level = getLevelInput(prompt1);
                    checkInput(level);
                }
            }
            reader.open("level" + std::to_string(level) + ".txt");
        }
    }

    return 0;
}

void displayCrossword()
{
    cout << endl
         << "     Welcome to\n\n"
         << "         W \n"
         << "     C R O S S\n"
         << "         R\n"
         << "         D\n\n";
}

int getLevelInput(string prompt)
{
    int input = 0;
    cout << prompt;
    cin >> input;
    return input;
}

bool checkInput(int input)
{
    if (cin.fail() || input < 1)
    {
        return false;
    }
    return true;
}