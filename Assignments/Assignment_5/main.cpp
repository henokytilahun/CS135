#include <iostream>
#include <fstream>
#include <sstream>

int main()
{
    // initalize variabkles and arrays
    std::string plate[1200];
    std::string date[1200];
    std::string time[1200];
    std::string weight[1200];
    std::string speed[1200];
    std::string file_name = "";
    std::ifstream reader;

    int arr_size = sizeof(plate) / sizeof(plate[0]);

    std::cout << "Open File: ";
    do
    {
        getline(std::cin, file_name);
        reader.open(file_name.c_str());
        if (!reader)
        {
            if (!reader)
            {
                std::cout << "Could not open " << file_name;
                std::cout << "\nOpen File: ";
                reader.clear();
                reader.ignore(100, '\n');
            }
            reader.open(file_name.c_str());
        }
    } while (!reader);

    int i = 0;
    std::string line = "";
    while (!reader.eof())
    {
        getline(reader, line);
        std::stringstream ss(line);

        getline(ss, plate[i], ',');
        getline(ss, date[i], ',');
        getline(ss, time[i], ',');
        getline(ss, weight[i], ',');
        getline(ss, speed[i], ',');
        std::cout << speed[i] << '\n';
        i++;
    }

    reader.close();
    return 0;
}