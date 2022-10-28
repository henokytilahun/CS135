/*
  Name: Henok Tilahun, 5007740928, 1021, Lab 6b
  Description: Takes user input for file name and the reads the file.
  It checks if file is opened or not and decides a course of action.
  Puts file into two arrays. It creats a 2-d array.
  Finds the sum of the rows and the columns.
  Input: String
  Output: Rows with row sum and columns with column sum
*/
#include <iostream>
#include <fstream>
#include <iomanip>
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
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
    double high_sum = 0;
    double low_sum = 0;

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
                          << "Enter file name\n**";
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
                if(arr[i][j] < lowest)
                {
                    lowest = arr[i][j];
                }
                if(arr[i][j] > highest)
                {
                    highest = arr[i][j];
                }
            }
        }
    }

    for(int i = 0; i < 12; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(j % 2 == 0)
            {
                low_sum += arr[i][j];
            } else
            {
                high_sum += arr[i][j];
            }
        }
    }

    // display
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "\n" << city;
    std::cout << "\nLowest temperature of the year was " << lowest << "° F.";
    std::cout << "\nHighest temperature of the year was " << highest << "° F.";
    std::cout << "\nAverage low temperature of the year was " << low_sum/12 << "° F.";
    std::cout << "\nAverage high temperature of the year was " << high_sum/12 << "° F.";
    
    return 0;
}