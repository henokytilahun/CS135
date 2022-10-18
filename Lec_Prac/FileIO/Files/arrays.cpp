#include <iostream>
#include <array>

int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7 ,8};
    for(int i = 0; i < 8; i++)
    {
        std::cout << numbers[i] << std::endl;
    }
    return 0;
}