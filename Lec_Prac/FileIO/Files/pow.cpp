#include <iostream>
#include <cmath>

using std::cout, std::string, std::endl;
void printArray(int a[], int size, int startFrom = 0);

double myPow (double base, double exp = 2)
{
    return std::pow(base, exp);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printArray(arr,10);
    printArray(arr,10,4);

    return 0;
}

void printArray(int a[], int size, int startFrom) //notice how there isn't a default value here 
//when prototype is used
{
    for(int i = startFrom; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}