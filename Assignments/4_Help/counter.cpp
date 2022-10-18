#include <iostream>
#include <array>

int main ()
{
    std::array<int,22> arr[] = {5, 9, 13, 15, 17, 21, 25, 27, 33, 37, 39, 43, 45, 47, 49, 53, 59, 61, 63, 65, 67, 73, 75};
    int counter = 0;
    for(int i = 0; i < arr.size(); i ++)
    {
        counter++;
    }
    std::cout << counter;

    return 0;
}