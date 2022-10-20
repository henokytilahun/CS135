#include<iostream>

int main()
{
    double numbers[] = {1.15, 5.1};
    double temp = numbers[0];
    numbers[0] = numbers[1];
    numbers [1] = temp;
    /*
    for(datatype temp : arrName)
    {
        code
    }
    */

    for(double num : numbers)
    {
        std::cout << num << std::endl;
    }
    return 0;
}