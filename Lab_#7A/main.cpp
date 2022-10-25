#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    std::string filename = "";
    std::ifstream reader;

    std::cout << "Enter file name\n**";
    do
    {
        getline(std::cin, filename);
        reader.open(filename.c_str());
        if (!reader)
        {
            if (!reader)
            {
                std::cout << ""
                    << "";
                reader.clear();
                reader.ignore(100, '\n');
            }
            reader.open(filename.c_str());
        }
    } while (!reader);


    return 0;
}