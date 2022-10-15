#include <fstream>
#include <iostream>

int main()
{
    std::ifstream reader;
    std::string file_name;
    int total, counter, a, b = 0;

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

    while(!reader.eof())
    {
        reader >> a >> b;
        if(reader.fail())
        {
            reader.clear();
            reader.ignore(100, '\n');
            std::cout << "Error in line\n";
        } else
        {
            std::cout<< a << " + " << b << " = " <<  a + b << std::endl;
            counter = a + b;
            total += counter;
        }
    }

    std::cout << "Running total = " << total;

    reader.close();

    return 0;
}