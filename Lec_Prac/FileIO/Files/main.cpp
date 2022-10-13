#include <fstream>
#include <iostream>

int main()
{
    //1.create an ifstream object
    std::ifstream reader;
    //2.Open a file
    reader.open("in1.txt");
    //2.1 Optionally, check if file was opened
    //3.read the file
    std::string line;
    //Not a step
    while(std::getline(reader, line))
    {
        std::cout << line << std::endl;
    }

    //4.close the file
    reader.close();
    return 0;
}