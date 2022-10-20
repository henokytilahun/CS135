#include<iostream>

int main()
{
    int arr[] = {1,2,35,7,32,41,12,41,2,43,4,58,86,37,8,11,2,3,8,31,24,74,7,32,6};

    std::cout <<"Memory consumed by the array: " << sizeof(arr) << " bytes\n";
    std::cout << "Memory consumed by a cell: " << sizeof(arr[0]) << "bytes\n";
    std::cout << "Num of Elements in array: " << sizeof(arr)/sizeof(arr[0]) << "\n";


    /*
        int numbers[8];
        for(int i = 0; i< sizeof(numbers/sizeof(numbers[i])); i++)
        {
            std::cout < numbers[i];
        }
    
    */
    return 0;
}