#include <iostream>
#include <vector>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 0, 6};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int search = -1;

    std::cout << "unsorted\n";
    for (int num : arr)
    {
        std::cout << num << " ";
    }

    std::cout << "\n Sorted";
    
    for (int i = 0; i < arrSize - 1; i++)
    {
        for (int j = 0; j < arrSize-1; j++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int num : arr)
    {
        std::cout << num << " ";
    }
    return 0;
}