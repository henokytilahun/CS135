#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

int main()
{
    std::fstream reader;
    std::string s_arr[100];
    std::string i_arr[100];

    int min = 0;
    int max = 0;
    int sum = 0;
    double average = 0.0;
    int foundCount = 0;
    std::string toFind = "";

    // ask user for file name
    std::string filename = "";

    // check for file name failure
    do
    {
        std::cout << "Enter a file name\n**";
        std::getline(std::cin, filename);
        reader.open(filename.c_str());
        if (!reader)
        {
            if (!reader)
            {
                std::cout << "\nError: Invalid file name.\n";
                std::cout << "Enter a file name\n**";
                reader.clear();
                reader.ignore(100, '\n');
            }
            std::getline(std::cin, filename);
        }
    } while (!reader);

    // ask for person to find in file
    std::cout << "\n\nEnter a name to search\n**";
    std::getline(std::cin, toFind);

    std::string line = "";
    while (!reader.eof())
    {
        std::getline(reader, line);
        std::stringstream ss(line);

        std::getline(ss, i_arr[], ' ');
        std::getline(ss, s_arr[], ' ');

        for (int i = 0; i <= foundCount - 1; i++)
        {
            std::getline(ss, i_arr[i], ' ');
            std::getline(ss, s_arr[i], ' ');
            std::cout << i_arr[i];

            if (!(i == foundCount - 1))
            {
                std::cout << ", ";
            }
        }

        foundCount++;
    }
    reader.close();
    return 0;
}