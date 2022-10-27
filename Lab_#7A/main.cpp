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
    //initalize global variables
    std::string filename = ""; //initalize string
    std::ifstream reader; //initalize input oject
    const int r = 7, c = 10; //initalize nums for arrays
    double arr[r][c]; //initalize arrays
    double row[c], col[r]; //initalize arrays
    double rowSum = 0.0, colSum = 0.0; //initalize sums
    std::cout << "Enter a file name\n**"; //Ask user for input
    do //start do while loop
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

    for(int i = 0; i < r; i++) //start for loop
    {
        rowSum = 0.0;
        for(int j = 0; j < c; j++)
        {
            reader >> arr[i][j];
            rowSum += arr[i][j];
        }
        row[i] = rowSum;
    } //end for loop

    reader.close(); //close file

    std::cout << "\nROW SUMS: \n" << std::setprecision(1) << std::fixed
            << std::left;

    for(int i = 0; i < r; i++) //start neseted for loop
    { 
        for(int j = 0; j < c; j++) //continue nested for loop
        {
            std::cout << std::setw(4) << arr[i][j];
            if(!(j == 9))
            {
                std::cout << " + ";
            }
        }
        std::cout << " = " << row[i] << "\n";
    } //end for nested for loop

    std::cout << "\n";

    for(int i =0; i < c; i++) //start loop
    {
        colSum = 0.0;
        for(int j = 0; j < r; j++) //continue loop
        {
            colSum += arr[j][i];
        }
        col[i] = colSum;
    } //end oop

    std::cout << "COLUMN SUMS: \n";
    for(int i = 0; i < c; i++) //start loop
    {
        for(int j = 0; j < r; j++) //continue loop
        {
            std::cout << std::setw(4) << arr[j][i];
            if(!(j ==6)) 
            {
                std::cout << " + ";
            }
        }
        std::cout << " = " << col[i] << "\n";
    } //end loop

    return 0;
}