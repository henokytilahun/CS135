#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
    bool play_again = true;
    while (play_again /*If user wants to play again*/)
    {
        ifstream in_file("level1.txt");
        string line;
        vector<vector<char>> rect;
        while (getline(in_file, line))
        {
            stringstream sstr(line);
            char foo;
            vector<char> bar; // variable scope allows it to reset

            while (sstr >> foo)
            {
                bar.push_back(foo);
            }

            rect.push_back(bar);
        }
        in_file.close();

        for (unsigned int i = 0; i < rect.size(); i++)
        {
            for (unsigned int j = 0; j < rect[i].size(); j++)
            {
                cout << rect[i][j] << " ";
            }
            cout << endl;
        }

        play_again = false;
    }

    return 0;
}