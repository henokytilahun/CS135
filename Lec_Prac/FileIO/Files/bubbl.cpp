#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

int main()
{
    int arr[] = {4, 3, 8, 2, 9, 0, 10, 12, 7, 15, 1};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, arrSize);

    printArray(arr, arrSize);
    return 0;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool swapped = false; //resets due to variable scope
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

void bubbleSort2(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (a[i] > a[i] + 1)
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}