#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    std::string filename = "";
    std::ifstream reader;
    int r = 7, c = 10;
    double arr[r][c];
    double row[c], col[r];
    double rowSum = 0.0, colSum = 0.0;
    std::cout << "Enter file name\n**";
    do
    {
        getline(std::cin, filename);
        reader.open(filename.c_str());
        if (!reader)
        {
            if (!reader)
            {
                std::cout << "\nError: Invalid File Name\n"
                    << "Enter file name\n**";
                reader.clear();
                reader.ignore(100, '\n');
            }
            reader.open(filename.c_str());
        }
    } while (!reader);

    for(int i = 0; i < r; i++)
    {
        rowSum = 0.0;
        for(int j = 0; j < c; j++)
        {
            reader >> arr[i][j];
            rowSum += arr[i][j];
        }
        row[i] = rowSum;
    }

    reader.close();

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "= " << row[i] << "\n";
    }

    std::cout << "\n\n";

    for(int i =0; i < c; i++)
    {
        colSum = 0.0;
        for(int j = 0; j < r; j++)
        {
            colSum += arr[j][i];
        }
        col[i] = colSum;
    }



    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            std::cout << arr[j][i] << " ";
        }
        std::cout << "= " << col[i] << "\n";
    }

    return 0;
}