#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
    vector<vector<char>> rect;
    while (true)
    {
        ifstream in_file("level1.txt");
        string line;
        while (getline(in_file, line))
        {
            stringstream sstr(line);
            int foo;
            vector<char> bar;

            while (sstr >> foo)
            {
                bar.push_back(foo);
            }

            rect.push_back(bar);
        }
        in_file.close();
    }


    for (unsigned int i = 0; i < rect.size(); i++)
    {
        for (unsigned int j = 0; j < rect[i].size(); j++)
        {
            cout << rect[i][j] << endl;
        }
    }

    return 0;
}