/*
  Name: Henok Tilahun, 5007740928, 1021, Lab 5B
  Description: Takes user input for file name and the reads the file.
  It checks if file is opened or not and decides a course of action.
  Finalizes the total of all added numbers in the file then displays
  it as the "running total".
  Input: String
  Output: All the numbers and what they add to along with the total
*/
#include <fstream>
#include <iostream>
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main()
{
    //initalize/declare global variables/objects
    std::ifstream reader;
    std::string file_name = "";
    int total = 0; 
    int counter = 0;
    int a = 0;
    int b = 0;

    //Ask user for input
    std::cout << "Enter file name\n**\n";
    std::cin >> file_name;

    //try opening file
    reader.open(file_name);

    //check if file opens
    if (!reader)
    {
        do
        {
            if (!reader)
            {
                std::cout << "Error: Invalid file name\n"
                          << "Enter file name\n**\n";
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cin >> file_name;
            reader.open(file_name);
        } while (!reader);
    }

    //Run through to the end of the file
    while(!reader.eof())
    {
        reader >> a >> b; //puts file inputs in two variables
        //checks for characters and the such
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

    //prints out the total
    std::cout << "\nRunning total = " << total;

    reader.close();

    return 0;
}