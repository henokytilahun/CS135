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

bool correct(vector<vector<char>> board, char letter);

void print(vector<vector<char>> board, vector<char> guesses, int &counter);

bool checkInput(int input);

bool player_won(int counter); //addition

int main()
{
    char decision = 'A';
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
                cout << "\nLevel files could not be found!\n";
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

        cout << endl;
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
        int counter = 100;
        vector<char> guess;
        print(board, guess, counter);
        string prompt2 = "\nEnter a letter:\n";
        bool has_guessed;
        while (guesses > 0)
        {
            char letter = getCharInput(prompt2);
            letter = toupper(letter);
            has_guessed = guessed(guess, letter);
            if (has_guessed == false)
            {
                guess.push_back(letter);
                if (correct(board, letter) == false)
                {
                    guesses--;
                }
                cout << "Remaining incorrect guesses: " << guesses << endl << endl;
            }
            else
            {
                while (has_guessed == true)
                {
                    if (correct(board, letter) == false)
                    {
                        guesses--;
                    }
                    cout << "The letter is already guessed, try again!\n";
                    cout << "Remaining incorrect guesses: " << guesses << endl;
                    letter = getCharInput(prompt2);
                    letter = toupper(letter);
                    has_guessed = guessed(guess, letter);
                    if (has_guessed == false)
                    {
                        guess.push_back(letter);
                        break;
                    }
                }
            }
            print(board, guess, counter);

            if(guesses == 0)
            {
                cout << "Better luck next time!\n";
            }
            if(counter == 0)
            {
                break;
            }
        }

        if(counter == 0)
        {
            cout << "Congratulations! you solved the level!\n";
        }
        string prompt3 = "Play again? (y/n)\n";
        cout << prompt3;
        cin >> decision;
        decision = toupper(decision);
        while (decision != 'Y' && decision != 'N') // while loop
        {
            if (decision != 'Y' && decision != 'N') // if statement
            {
                cout << "Invalid Input.\n" << prompt3;
                cin.clear();
                cin.ignore(100, '\n');
            }
            cin >> decision;
            decision = toupper(decision);
        }

    } while (decision == 'Y');

    cout << "Thank you for playing CrossWord!";

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

void print(vector<vector<char>> board, vector<char> guesses, int &counter)
{
    counter = 0; //addition
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
                counter++; //addition
            }
            cout << " ";
            if(counter > 0) //addition
            {
                player_won(counter);
            }
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

bool correct(vector<vector<char>> board, char letter)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (letter == board[i][j])
            {
                return true;
            }
        }
    }
    return false;
}

bool player_won(int counter) //addition
{
    if(counter <= 0)
    {
        return true;
    }
    return false;
}