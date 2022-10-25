#include <iostream>
#include <vector>

int main ()
{
    std::string str = "hello World";
    char search = 'r';
    bool found = false;
    int count = 0;

    for (char temp : str)
    {
        if(temp == search)
        {
            found = true;
            count++;
        }
    }

    return 0;
}