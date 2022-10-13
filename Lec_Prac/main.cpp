#include <fstream>
#include <iostream>

int main()
{
    std::cout << "Please enter a filename:\n";
    std::string filename;
    std::getline(std::cin, filename);

    std::ofstream writer;
    writer.open(filename.c_str(), std::fstream::app);
    std::string line;

    do
    {
        std::cout << "Enter a line of text:\n";
        std::getline(std::cin, line);
        if (line != "done")
        {
            writer << line << std::endl;
        }
    } while (line != "done");
    writer.close();

    return 0;
}