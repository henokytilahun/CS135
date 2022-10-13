#include <fstream>
#include <iostream>

int main()
{

    std::ifstream reader;

    reader.open("in3.txt");
    int x,y;
    while (!reader.eof())
    {
        reader >> x >> y;
        if (reader.fail())
        {
            reader.clear();
            reader.ignore(100, '\n');
        } else
        {
            std::cout << x*y << std::endl;
        }
    }

    reader.close();
    return 0;
}