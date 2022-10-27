#include <iostream>
#include <fstream>
#include <iomanip>

int main()
{
    // initalize variables
    std::string filename = "";
    std::ifstream reader;
    std::string city = "";
    double arr[12][2];
    bool first_line = true;
    double lowest = 1000.00;
    double highest = -1000.00;
    double av_low = 1000.00;
    double av_high = -1000.00;
    ;

    // make do-while loop that checks if file is open

    std::cout << "Enter file name\n**";
    do // start do while loop
    {
        getline(std::cin, filename);
        reader.open(filename.c_str());
        if (!reader)
        {
            if (!reader)
            {
                std::cout << "\nError: Invalid File Name\n"
                          << "Enter a file name\n**";
                reader.clear();
                reader.ignore(100, '\n');
            }
            reader.open(filename.c_str());
        }
    } while (!reader); // end do-while loop

    // start reading loop w/ 2-d array
    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(first_line)
            {
                getline(reader, city);
                first_line = false;
            }
            if(!first_line)
            {
                reader >> arr[i][j];
            }
        }
    }

    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            std::cout << arr[i][j] << "\t";
        }
    }

    // display

    return 0;
}