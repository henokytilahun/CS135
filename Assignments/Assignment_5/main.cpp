#include <iostream>
#include <fstream>

int main()
{
    //initalize variabkles and arrays
    std::string plate[500];
    std::string date[500];
    std::string time[500];
    int weight[500];
    int speed[500];
    std::string file_name = "";
    std::ifstream reader;

    std::cout <<"Open File: ";
    do
    { 
        getline(std::cin, file_name);
        reader.open(file_name.c_str());
        if(!reader)
        {
            if(!reader)
            {
                std::cout << "Could not open " << file_name;
                std::cout <<"\nOpen File: ";
                reader.clear();
                reader.ignore(100, '\n');
            }
            reader.open(file_name.c_str());
        }
    } while (!reader);
    








    reader.close();
    return 0;
}