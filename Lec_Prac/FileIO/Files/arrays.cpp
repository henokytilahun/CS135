#include <iostream>
#include <array>

int main()
{
    std::string friends[] = {"Henok", "Devin", "Sarah", "Julia", "Seth"};

    int x[10];

    for(int i = 0; i <= 9; i++)
    {
        std::cout << "Enter a number to save at index " << i << ":\n";
        std::cin >> x[i];

    }

    std::cout << "Array's content: ";

    for(int i =0; i<= 9; i++)
    {
        if(i < 9)
        {
            std::cout << x[i] << " , ";
        } else
        {
            std::cout << x[i];
        }
        
    }
    std::cout << std::endl;
    return 0;
}