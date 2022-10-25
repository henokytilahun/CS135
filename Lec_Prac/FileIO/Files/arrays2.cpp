#include <iostream>
#include <vector>

int main()
{
    //declaring a vector: no slots, no data
    std::vector<int>v1;

    v1[0] = 100; //segmentation fault (accessing a memory location that doesn't belong to you)


    return 0;
}