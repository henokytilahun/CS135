#include <iostream>

using namespace std;

//function prototype
void sayHello();
void sayName(string name);
int addition(int a, int b);
bool searchString(string str, char search);

int main()
{
    //calling a void function
    sayHello();
    string name = "";
    cout << "What's ur name?\n**";
    cin >> name;
    sayName(name);

    int a , b = 0;
    cout << "\nfirst num?";
    cin >> a;
    cout << "\nsecond num?";
    cin >> b;
    cout << addition(a,b);


    cout << boolalpha << searchString("Hello", 'l') << '\n';
    return 0;
}

bool searchString(string str, char search);

//function with no return and no args
void sayHello ()
{
    cout << "Hello CS 135\n";
}

//function with no return type and arguments
void sayName (string name)
{
    cout << "Hello " + name;
}

int addition(int a, int b)
{
    return a + b;
}


bool searchString(string str, char search)
{
    for (char letter : str)
    {
        if(letter == search)
        {
            return true;
        }
    }
    return false;
}