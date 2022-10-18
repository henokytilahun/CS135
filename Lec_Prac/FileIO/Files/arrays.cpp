#include <iostream>
#include <array>

int main()
{
    std::string friends[] = {"Henok", "Devin", "Sarah", "Julia", "Seth"};
    for(int i = 0; i < 5; i++)
    {
        std::cout << friends[i] << std::endl;
    }
    return 0;
}