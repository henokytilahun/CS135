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
    callCounter(); //runs both lines in callCounter, keeps the variable alive
    callCounter(); //runs second lines only
    callCounter();
    callCounter();
    callCounter();
    callCounter();
    callCounter();
    callCounter();
    callCounter();
    return 0;    
}
