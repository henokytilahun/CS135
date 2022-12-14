/*
  Name: Henok Tilahun, 5007740928, 1021, A6
  Description: Gets input from user using user-defined functions.
  Check for failure using user defined funcitions. Displays a 
  cross_word puzzel as an interactive game. Gives user
  5 incorrect tries. Loops as to give the user an opportunity
  to play again
  Input: Ints, strings, and chars
  Output: chars, bools, ints, and void
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
// define standard namespace
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
// define user-functions
void displayCrossword();// define user-functions
int getLevelInput(string prompt);// define user-functions
char getCharInput(string prompt);// define user-functions
bool guessed(vector<char> guesses, char search);// define user-functions
char check(vector<char> guesses, char search);// define user-functions
bool correct(vector<vector<char>> board, char letter);
void print(vector<vector<char>> board,vector<char>guesses,int&counter);
bool checkInput(int input);// define user-functions
bool player_won(int counter); // define user-functions
// end of define user-functions
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main()
{
    char decision = 'A';
    displayCrossword();
    do
    {
        std::ifstream reader;
        string prompt1 = "Enter level to play:\n";

        int level = getLevelInput(prompt1);

        while (checkInput(level) == false)
        {
            if (cin.fail() || level < 1)
            {
                cout << "Invalid Entry!\n";
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
                        cout << "Invalid Entry!\n";
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
            char element = 'B';
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
        bool has_guessed = false;
        while (guesses > 0)
        {
            char l = getCharInput(prompt2);
            l = toupper(l);
            has_guessed = guessed(guess, l);
            if (has_guessed == false)
            {
                guess.push_back(l);
                if (correct(board, l) == false)
                {
                    cout << "the letter is not on the board\n";
                    guesses--;
                }
                cout << "Remaining incorrect guesses: " << guesses 
                << endl << endl;
            }
            else
            {
        
                if(correct(board,l)==false&&check(guess,l)==false)
                {
                    guesses--;
                }
                cout<<"The letter is already guessed, try again!\n";
                cout << "Remaining incorrect guesses: " << guesses 
                << endl << endl;        
            }
            print(board, guess, counter);

            if(guesses == 0)
            {
                cout << "\nBetter luck next time!\n";
            }
            if(counter == 0)
            {
                break;
            }
        }

        if(counter == 0)
        {
            cout << "\nCongratulations! you solved the level!\n";
        }
        string prompt3 = "Play again? (y/n)\n";
        cout << prompt3;
        cin >> decision;
        decision = toupper(decision);
        while (decision != 'Y' && decision != 'N') // while loop
        {
            if (decision != 'Y' && decision != 'N') // if statement
            {
                cout << "Invalid entry!\n" << prompt3;
                cin.clear();
                cin.ignore(100, '\n');
            }
            cin >> decision;
            decision = toupper(decision);
        }

    } while (decision == 'Y');

    cout << "Thank you for playing CrossWord!\n";

    return 0;
}
/*
  FUNCTION_IDENTIFIER: Displays crossword sign.
  parameters: N/A
  return value: N/A
*/
void displayCrossword()
{
    cout << endl
         << "     Welcome to\n\n"
         << "         W \n"
         << "     C R O S S\n"
         << "         R\n"
         << "         D\n\n";
}
// initalize user-functions
/*
  FUNCTION_IDENTIFIER: Get's user input.
  parameters: string
  return value: returns int
*/
int getLevelInput(string prompt)
{
    int input = 0;
    cout << prompt;
    cin >> input;
    return input;
}
/*
  FUNCTION_IDENTIFIER: Checks if input is not int or below 1
  parameters: int
  return value: returns boolean
*/
bool checkInput(int input)
{
    if (cin.fail() || input < 1)
    {
        return false;
    }
    return true;
}
/*
  FUNCTION_IDENTIFIER: Displays crossword board.
  parameters: 2-d vector, vector for all guessed characters
  return value: N/A
*/
void print(vector<vector<char>> board,vector<char>guesses,int&counter)
{
    counter = 0; //addition
    for (unsigned int i = 0; i < board.size(); i++)
    {
        for (unsigned int j = 0; j < board[i].size(); j++)
        {
            if(board[i][j]=='#'||check(guesses,board[i][j])==board[i][j])
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
/*
  FUNCTION_IDENTIFIER: Get's user input.
  parameters: string
  return value: returns char
*/
char getCharInput(string prompt)
{
    string input = "";
    cout << prompt;
    cin >> input;
    char nInput = input[0];
    return nInput;
}
/*
  FUNCTION_IDENTIFIER: returns character if matches search.
  parameters: vector, character
  return value: returns char
*/
char check(vector<char> guesses, char search)
{
    for (unsigned int i = 0; i < guesses.size(); i++)
    {
        if (search == guesses[i])
        {
            return guesses[i];
        }
    }
    return -1;
}
/*
  FUNCTION_IDENTIFIER: See if letter is already guessed.
  parameters: vector, character
  return value: returns int
*/
bool guessed(vector<char> guesses, char search)
{
    for (unsigned int i = 0; i < guesses.size(); i++)
    {
        if (search == guesses[i])
        {
            return true;
        }
    }
    return false;
}
/*
  FUNCTION_IDENTIFIER: sees if guessed letter is correct.
  parameters: 2-d vector, char
  return value: returns bool
*/
bool correct(vector<vector<char>> board, char letter)
{
    for (unsigned int i = 0; i < board.size(); i++)
    {
        for (unsigned int j = 0; j < board[i].size(); j++)
        {
            if (letter == board[i][j])
            {
                return true;
            }
        }
    }
    return false;
}
/*
  FUNCTION_IDENTIFIER: Checkts to see if player won before 5 inc guesses
  parameters: int
  return value: returns bool
*/
bool player_won(int counter) //addition
{
    if(counter <= 0)
    {
        return true;
    }
    return false;
}