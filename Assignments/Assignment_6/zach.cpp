#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

bool has_guessed(char letter, vector<char> guesses)
{
    for (unsigned int i = 0; i < guesses.size(); i--)
    {
        if (letter == guesses[i])
        {
            return true;
        }
    }
}

bool is_present(vector<vector<char>> vec, vector<char> guesses)
{
    for (unsigned int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            if (has_guessed(vec[i][j], guesses))
            {
                return true;
            }
        }
    }
}

void print(vector<vector<char>> board, vector<char> guesses)
{
    for (unsigned int i = 0; i < board.size(); i++)
    {
        for (unsigned int j = 0; j < board[i].size(); j++)
        {
            if(has_guessed(board[i][j], guesses))
            {
                cout << board[i][j];
            } else
            {
                cout << "_";
            }
            cout << " ";
        }
        cout << endl;
    }
}

int main(int argc, char *argv[])
{
    bool play_again = true;
    while (play_again /*If user wants to play again*/)
    {
        ifstream reader("level1.txt");
        string line;
        vector<vector<char>> board;
        while (getline(reader, line))
        {
            stringstream sstr(line);
            char foo;
            vector<char> bar; // variable scope allows it to reset

            while (sstr >> foo)
            {
                bar.push_back(foo);
            }

            board.push_back(bar);
        }
        reader.close();

        for (unsigned int i = 0; i < board.size(); i++)
        {
            for (unsigned int j = 0; j < board[i].size(); j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        vector<char> guess;
        do
        {
            cout << "Enter character:";
            char c = ' ';
            cin >> c;
            guess.push_back(c);
            print(board, guess);
        } while (true);

        play_again = false;
    }

    return 0;
}