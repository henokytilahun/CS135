#include <iostream>
#include <cmath>

using namespace std;

void callCounter()
{
    static int count = 0;
    cout << ++count << endl;
}

int main()
{
    callCounter();
    callCounter();
    callCounter();
    callCounter();
    callCounter();
    callCounter();
    callCounter();
    callCounter();
    callCounter();
    return 0;
}
