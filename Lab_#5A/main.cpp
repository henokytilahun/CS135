/*
  Name: Henok Tilahun, 5007740928, 1021, Lab 5A
  Description: Takes user input then prints out stars in increaseing
  then decreasing order while the user input is between 2 and 20.
  Input: number between 2 and 20
  Output: Stars aranged in half-hourglass shape
*/
#include <iostream>
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main()
{

    // initalize global variables
    int num_of_stars = 20;

    std::cout << "Enter a count between 2 and 20\n**\n";
    // start do-while loop (check for input error)
    do
    {
        if (std::cin.fail() || num_of_stars > 20 || num_of_stars < 2)
        {
            std::cout << "Error: Invalid entry, please retry\n"
                      << "Enter a count between 2 and 20\n**\n";
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
        std::cin >> num_of_stars;
    } while (std::cin.fail() || num_of_stars > 20 || num_of_stars < 2);

    for (int i = 0; i < num_of_stars; i++)
    {
        for (int j = i ; j < num_of_stars; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < num_of_stars; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}