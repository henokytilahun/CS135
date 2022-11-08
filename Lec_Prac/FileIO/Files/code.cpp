#include <iostream>
#include <vector>
#include <cmath>

using std::cout, std::string, std::endl, std::vector, std::min, std::max;

void stats(int a, int b, int c, int d, int &min, int &max, double &avg);

int main()
{


    return 0;
}

void stats(int a, int b, int c, int d, int &mini, int &maxi, double &avg)
{
    mini = min(a, min(b,c));
    maxi = max(a, max(b,c));

    avg = double(a+b+c)/3;

    
}