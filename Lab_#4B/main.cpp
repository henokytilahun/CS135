/*
  Name: Henok Tilahun, 5007740928, 1021, Lab 4B
  Description: Takes user input then determins the number of add and
  even numbers added up to said number from 1. It also makes sure that
  the inputs are valid and are in between 2 and 10000
  Input: number between 2 and 10000
  Output: sum of even and odd numbers
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
    int num = 2;

    //Ask user to enter value that is greater than 1 and less than 1000
    std::cout << "Enter a count between 2 and 10000\n**\n";
    do
    {
      if(std::cin.fail() || num > 10000 || num <=1)
      {
        std::cout << "Error: Invalid entry, please retry\n";
        std::cout << "Enter a count between 2 and 10000\n**\n";
        std::cin.clear();
        std::cin.ignore(100,'\n');
      } 
      std::cin >> num;
    } while (std::cin.fail() || num > 10000 || num <= 1);

    //use for loop to find even numbers
    int even_final = 0;
    for(int i = 0; i <= num; i += 2)
    {
        even_final += i;
    }
    std::cout << "Sum of even numbers: " << even_final << "\n";

    //use while loop to find odd numbers
    int odd_final = 0;
    int i = 1;
    while(i <= num)
    {
        odd_final += i;
        i += 2;
    }
    std::cout << "Sum of odd numbers:  " << odd_final;
}