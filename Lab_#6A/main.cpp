#include <iostream>
#include <fstream>
#include <sstream>

int main()
{
    double arr[100];
    std::fstream reader;
    std::string file_name = "";

    // do-while loop to check if file name actually opened
    do
    {
        // ask user for file name
        std::cout << "Enter a file name\n**";
        std::getline(std::cin, file_name);

        reader.open(file_name.c_str());

        if (!reader)
        {
            if (!reader)
            {
                std::cout << "\nError: Invalid file name.\n";
                reader.clear();
                reader.ignore(100, '\n');
            }
            reader.open(file_name.c_str());
        }
    } while (!reader);

    std::string line = "";

    // while loop to read until end of file. Invalid inputs need to be ignored.
    int cnt = 0;
    while (!reader.eof())
    {
        reader >> arr[cnt];

        if (!reader)
        {
            if (!reader.eof())
            {
                reader.clear();
                reader.ignore(100, '\n');
                std::cout << "Error: Invalid input in file.\n";
            }
            continue;
        }
        else
        {
            std::cout << arr[cnt] << std::endl;
        }

        cnt++;
    }

    reader.close();

    return 0;
}