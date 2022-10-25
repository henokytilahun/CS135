#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    std::string filename = "";
    std::ifstream reader;
    int r = 7, c = 10;
    double arr[r][c];
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
        for(int j = 0; j < c; j++)
        {
            reader >> arr[i][j];
        }
    }

    reader.close();

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }


    return 0;
}