#include <fstream>
#include <iostream>

int main()
{

    std::ifstream reader;

    reader.open("in2.txt");
    int x;
    while (!reader.eof())
    {
        reader >> x;
        if (reader.fail())
        {
            reader.clear();
            reader.ignore(100, '\n');
        } else
        {
            std::cout << x << std::endl;
        }
    }

    reader.close();
    return 0;
}