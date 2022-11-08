#include <iostream>
#include <vector>
#include <cmath>

using std::cout, std::string, std::endl, std::vector, std::min, std::max;

void stats(int a, int b, int c, int &min, int &max, double &average);

int main()
{
    int main_min, main_max;
    double main_average = 0.0;

    stats(19,31,8,main_min, main_max, main_average);

    cout << "\nmin: " <<main_min << "\n" << "\nmax: " <<main_max << "\n" << "average: " << main_average << "\n";

    return 0;
}

void stats(int a, int b, int c, int &mini, int &maxi, double &average)
{
    mini = min(a, min(b,c));
    maxi = max(a, max(b,c));

    average = static_cast<double>(a+b+c)/3;

    
}