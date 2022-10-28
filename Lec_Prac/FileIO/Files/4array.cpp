#include <iostream>
#include <vector>

int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,8,9,0,6};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int search = -1;

    std::cout << "Enter a number: \n";

    std::cin >> search;
    int index = -1;
    for(int i =0; i < arrSize; i++)
    {
        if(arr[i] == search)
        {
            //save index
            index = i;
        }
    }
    if(index != arrSize) //checks to see if index 
    {
        std::cout << index << "\n";
    }
    
    return 0;
}