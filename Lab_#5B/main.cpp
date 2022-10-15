#include <fstream>
#include <iostream>

int main()
{
    std::ifstream reader;
    std::string file_name;
    int total, a, b = 0;

    std::cout << "Enter file name\n**";
    std::cin >> file_name;

    reader.open(file_name);

    if (!reader)
    {
        do
        {
            if (!reader)
            {
                std::cout << "Error: Invalid file name\n"
                          << "Enter file name\n**";
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cin >> file_name;
            reader.open(file_name);
        } while (!reader);
    }

    

    reader.close();

    return 0;
}