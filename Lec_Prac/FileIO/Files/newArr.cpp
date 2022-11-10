#include <iostream>
#include <cstring>

//strcmp(str1, str2)           || returns zero if str1 == str2

using namespace std;

int main(int argc, char *argv[])
{
    if(argc == 1)
    {
        cout << "Pls pass an argument\n";
        return 0;
    }
    if(argc > 2)
    {
        cout << "pls pass no more than one argument\n";
        return 0;
    }
    if(strcmp(argv[1], "admin") == 0)
    {
        cout << "Admin mode\n";
    } else if(strcmp(argv[1], "user") == 0)
    {
        cout << "User mode\n";
    } else
    {
        cout << "Invalid Argument!\n";
    }

    return 0;
}