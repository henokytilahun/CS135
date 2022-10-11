#include <iostream>

int main()
{

    // initalize global variables
    int num_of_stars = 20;

    std::cout << "Enter a count between 2 and 20\n**";
    // start do-while loop (check for input error)
    do
    {
        if (std::cin.fail() || num_of_stars > 20 || num_of_stars < 2)
        {
            std::cout << "Error: Invalid entry, please retry\n"
            << "Enter a count between 2 and 20\n**"; 
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
        std::cin >> num_of_stars;
    } while (std::cin.fail() || num_of_stars > 20 || num_of_stars < 2);

    for (int i = 0; i < num_of_stars; i++)
    {
        for (int j = 0; j < num_of_stars; j++)
        {
            if(i = 0 || i == num_of_stars - 1)
            {
                std::cout << "*";
            }
        }
        std::cout << "\n*";
    }
    return 0;
}