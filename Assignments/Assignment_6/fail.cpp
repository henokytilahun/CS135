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

char getCharInput(string prompt);

bool guessed(vector<char> guesses, char search);

char check(vector<char> guesses, char search);

bool correct(vector<vector<char>> board, vector<char> guesses);

void print(vector<vector<char>> board, vector<char> guesses);

bool checkInput(int input);

int main()
{
    bool play_again = false;
    do
    {
        std::ifstream reader;
        string prompt1 = "Enter level to play:\n";

        displayCrossword();

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

        vector<vector<char>> board;
        string line = "";
        while (getline(reader, line))
        {
            std::stringstream ss(line);
            char element;
            vector<char> bar; // variable scope allows it to reset

            while (ss >> element)
            {
                bar.push_back(element);
            }
            board.push_back(bar);
        }
        reader.close();

        int guesses = 5;
        vector<char> guess;
        print(board, guess);
        string prompt2 = "Enter a letter:\n";
        bool has_guessed;
        while (guesses > 0)
        {

            char letter = getCharInput(prompt2);
            letter = toupper(letter);
            has_guessed = guessed(guess, letter);
            if (has_guessed == false)
            {
                guess.push_back(letter);
                guesses--;
            }
            else
            {
                while (has_guessed == true)
                {
                    cout << "The letter is already guessed, try again!\n";
                    letter = getCharInput(prompt2);
                    letter = toupper(letter);
                    has_guessed = guessed(guess, letter);
                    if(has_guessed == false)
                    {
                        guess.push_back(letter);
                        guesses--;
                        break;
                    }
                }
            }
            print(board, guess);
        }


    } while (play_again);

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

void print(vector<vector<char>> board, vector<char> guesses)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] == '#' || check(guesses, board[i][j]) == board[i][j])
            {
                cout << board[i][j];
            }
            else
            {
                cout << "_";
            }
            cout << " ";
        }
        cout << endl;
    }
}

char getCharInput(string prompt)
{
    char input = ' ';
    cout << prompt;
    cin >> input;
    return input;
}

char check(vector<char> guesses, char search)
{
    for (int i = 0; i < guesses.size(); i++)
    {
        if (search == guesses[i])
        {
            return guesses[i];
        }
    }
    return -1;
}

bool guessed(vector<char> guesses, char search)
{
    for (int i = 0; i < guesses.size(); i++)
    {
        if (search == guesses[i])
        {
            return true;
        }
    }
    return false;
}

bool correct(vector<vector<char>> board, vector<char> guesses)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (guessed(guesses, board[i][j]))
            {
                return true;
            }
        }
    }
    return false;
}