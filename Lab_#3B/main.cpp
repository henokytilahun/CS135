/*
  Name: Henok Tilahun, 5007740928, 1021, Lab_3B
  Description: Displays grade scale based on character given by user
  over.
  Input: letter grade
  Output: grade range based on letter grade
*/
#include <iostream>
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main() 
{
    //initalize global variables
    char input = ' ';
    std::string grade = "";

    //Ask user for grade
    std::cout << "Enter a letter grade\n**";
    std::cin >> input;
    std::cout << std::endl;

    //determine the percentages for the grade using the both 
    //capital and lowercase letters
    switch(input)
    {
        case 'A':
            grade = "90 - 100";
            std::cout << "Grade range is " << grade;
            break;
        
        case 'a':
            grade = "90 - 100";
            std::cout << "Grade range is " << grade;
            break;

        case 'B':
            grade = "80 - 89.99";
            std::cout << "Grade range is " << grade;
            break;
        
        case 'b':
            grade = "80 - 89.99";
            std::cout << "Grade range is " << grade;
            break;

        case 'C':
            grade = "70 - 79.99";
            std::cout << "Grade range is " << grade;
            break;
        
        case 'c':
            grade = "70 - 79.99";
            std::cout << "Grade range is " << grade;
            break;

        case 'D':
            grade = "60 - 69.99";
            std::cout << "Grade range is " << grade;
            break;
        
        case 'd':
            grade = "60 - 69.99";
            std::cout << "Grade range is " << grade;
            break;

        case 'F':
            grade = "0 - 59.99";
            std::cout << "Grade range is " << grade;
            break;
        
        case 'f':
            grade = "0 - 59.99";
            std::cout << "Grade range is " << grade;
            break;
        //write response for invalid inputs
        default:
            std::cout << "Error: '"<< input 
            << "' is not a valid letter grade";
            break;
    }
    //terminate program
    return 0;
}