/*
  Name: Henok Tilahun, 5007740928, 1021, Lab 6a
  Description: Takes user input for file name and the reads the file.
  It checks if file is opened or not and decides a course of action.
  Puts file into an array. Lines with characters will be skipped.
  Finds the min, max, sum, and average of the elements in the
  array
  Input: String
  Output: min, max, sum, average, elements inarray forwards and
  backwards.
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
    double arr[100];
    std::fstream reader;
    std::string file_name = "";
    double lowest = 10000;
    double highest = -10000;
    double sum = 0;
    // do-while loop to check if file name actually opened
    do
    {
        // ask user for file name
        std::cout << "Enter a file name\n**";
        std::getline(std::cin, file_name);
        reader.open(file_name.c_str());
        // check if file opens
        if (!reader)
        {
            if (!reader)
            {
                std::cout << "\nError: Invalid file name.\n";
                reader.clear();
                reader.ignore(100, '\n');
            }
            reader.open(file_name.c_str());
        }
    } while (!reader);
    std::cout << std::endl;
    // while loop to read until end of file.
    // Invalid inputs need to be ignored.
    int cnt = 0;
    //checks whether it's the end of the line for a file
    while (!reader.eof())
    {
        reader >> arr[cnt]; //puts input into array
        if (!reader) //if there is error in file, show this
        {
            if (!reader.eof())
            {
                reader.clear();
                reader.ignore(100, '\n');
                std::cout << "Error: Invalid input in file.\n";
            }
            continue;
        }
        if(reader) //get the lowest, highest and sum
        {
            if (arr[cnt] < lowest)
            {
                lowest = arr[cnt];
            }
            if (arr[cnt] > highest)
            {
                highest = arr[cnt];
            }
            sum += arr[cnt];
        }
        cnt++;
    }
    std::cout << "\nAmount of Elements Read In: " << cnt << "\n";
    std::cout << std::setprecision(2);
    std::cout << std::fixed;
    std::cout << "Forwards: ";
    for (int i = 0; i <= cnt - 1; i++) //prints out arrays forwardly 
    {
        std::cout << arr[i];
        if (!(i == cnt - 1)) //checks to see if it is the last element
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
    std::cout << "Backwards: ";
    for (int i = cnt - 1; i >= 0; i--) //prints out arrays backwards
    {
        std::cout << arr[i];
        if (!(i == 0))
        {
            std::cout << ", ";
        }
    }
    //starts the rest of the display
    std::cout << std::endl;
    std::cout << "Minimum: " << lowest << "\n";
    std::cout << "Maximum: " << highest << "\n";
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Average: " << sum / cnt << "\n";
    reader.close();
    return 0;
}