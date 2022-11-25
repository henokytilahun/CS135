#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    fstream reader;
    
    reader.open("in.txt");

    vector<vector<char> > board;
    string temp;
    while (getline(reader, temp))
    {
        vector<char> tempVec;
        stringstream ss(temp);
        char c;
        while(ss >> c)
        {
            tempVec.push_back(c);
        }
        board.push_back(tempVec);
    }
    
    for(int i = 0; i < board.size(); i++)
    {
        for(int j = 0; j < board[i].size(); j++)
        {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }

    for(vector<char> c : board)
    {
        cout << c;
    }

}