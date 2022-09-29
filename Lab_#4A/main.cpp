/*
  Name: Henok Tilahun, 5007740928, 1021, 4A
  Description: Increments a starting number by a given value to reach
  the ending number. Any input that is not numerical will be met with
  an error.
  Input: Starting number, ending number, increment value
  Output: A series of numbers that show the journey of the starting
  number all hte way to the ending number.
*/
#include <iostream>
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main() {


    //intalize global variables
    int start_num = 0;
    int end_num = 0;
    int inc = 0;

    //ask for starting number
    std::cout << "Enter a starting number\n**\n";
    std::cin >> start_num;

    //testing for invalid inputs
    while(std::cin.fail())
    {
        if(std::cin.fail())
        {
            std::cout << "Error: invalid entry.\n";
            std::cin.clear();
            std::cin.ignore(100,'\n');
        }
        std::cin >> start_num;
    }

    //ask for ending number
    std::cout << "Enter an ending number\n**\n";
    std::cin >> end_num;

    //testing for invalid inputs
    while(std::cin.fail())
    {
        if(std::cin.fail())
        {
            std::cout << "Error: invalid entry.\n";
            std::cin.clear();
            std::cin.ignore(100,'\n');
        }
        std::cin >> end_num;
    }

    //incremintation
    std::cout << "Enter a value to increment by\n**\n";
    std::cin >> inc;

    do
    {
        std::cout << start_num << " ";
        start_num += inc;
    } 
    while (start_num < end_num);
    
  
    return 0;
}