#include <iostream>
#include <vector>

using std::cout, std::string, std::endl, std::vector;

void stats(int a, int b, int c, int d, int &min, int &max, double &avg);

int main()
{


    return 0;
}

void stats(int a, int b, int c, int d, int &min, int &max, double &avg)
{
    if(a < b && a < c)
    {
        min = a;
    } else if (b < a && b < c)
    {
        min = b
    } else
    {
        min = c;
    }

    if(a > b && a > c)
    {
        max = a;
    } else if (b > a && b > c)
    {
        max = b
    } else
    {
        max = c;
    }gggggggggggggf

    
}