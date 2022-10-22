#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

int main()
{
    std::fstream reader;
    std::string names[100];
    std::string scores[100];

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

    int cnt = 0;
    std::string line = "";
    while(!reader.eof())
    {
        reader >> names[cnt] >> scores[cnt];
        cnt++;
    }
    std::cout << "Names Forward: ";
    for(int i = 0; i <= cnt-2; i++)
    {
        std::cout << names[i];
        if(!(i == cnt-2))
        {
            std::cout << ", ";
        }
    }
    std::cout << "\n";

    std::cout << "Scores Forward: ";
    for(int i = 0; i <= cnt-2; i++)
    {
        std::cout << scores[i];
        if(!(i == cnt-2))
        {
            std::cout << ", ";
        }
    }
    std::cout << "\n";
    std::cout << "Names Reverse: ";

    for(int i = cnt-2; i >= 0; i--)
    {
        std::cout << names[i];
        if(!(i == 0))
        {
            std::cout << ", ";
        }
    }

    std::cout << "\n";
    std::cout << "Scores Reverse: ";
    for(int i = cnt-2; i >= 0; i--)
    {
        std::cout << scores[i];
        if(!(i == 0))
        {
            std::cout << ", ";
        }
    }
    
    std::cout << foundCount << " results for " << toFind;

    reader.close();
    return 0;
}