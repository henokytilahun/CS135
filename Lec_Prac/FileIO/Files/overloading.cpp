#include <iostream>
using namespace std;

int f(int x)
{
    return 2 * x;
}

int f(int x, int y)
{
    return x * y;
}

double f(double x)
{
    return x/2;
}

int main()
{
    int x = 10;
    int y = 2;
    cout << f(x) << "\n";
    double x2 = 10;
    cout << f(x2) << "\n";

    return 0;
}