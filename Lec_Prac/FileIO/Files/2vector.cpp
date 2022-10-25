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

    int index = -1;
    for(int i = 0; i < str.length(); i++)
    {
        if(search == str[i])
        {
            index = i; //saves last occurance of letter
            break;
        }
    }

    return 0;
}