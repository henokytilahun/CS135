#include <iostream>

int main()
{
    //Syntax: dataType arrayName [numofRows][numofColms]
    int arr[3][3];


    int arr2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; //rows are okay to initalize but colms are needed

    std::cout << arr2[1][1] << "\n";

    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            std::cout << arr2[r][c] << "\t";
        }
        std::cout << "\n";
    }
    return 0;
}