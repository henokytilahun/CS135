#include <iostream>
#include <vector>

int main ()
{
    std::string str = "hello World";
    char search = 'r';
    bool found = false;

    for (char temp : str)
    {
        if(temp == search)
        {
            found = true;
        }
    }

    return 0;
}