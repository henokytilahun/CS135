#include <iostream>
#include <cmath>

using std::cout, std::string, std::endl;

double myPow (double base, double exp = 2)
{
    return std::pow(base, exp);
}

int main()
{
    cout << myPow(2,5) << endl;
    cout << myPow(5) << endl;
    
    return 0;
}
