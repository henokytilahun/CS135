#include <iostream>
using namespace std;

//function prototype
void sayHello();
void sayName(string name);
int addition(int a, int b);
bool searchString(string str, char search);

string ToUpperCase(string str);
//bool passwordReq(string password);

void changeX(int x)
{
    x = 10;
    cout << "X from the function: " << x << endl;
}
void changeArr0(int arr[], int size)
{
    arr[0] = 100;
}

int main()
{
    int x = 5;
    changeX(x);
    cout << "X from main: " << x << endl;
    int arr[] = {1,2,3,4,5};
    changeArr0(arr, 5);
    cout << arr[0] << endl;

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

    string str = "blabl";
    cout << ToUpperCase(str);


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
string ToUpperCase(string str)
{
    string result = ""; 
    for(char l : str)
    {
        result += toupper(l);
    }
    return result;
}

/*
bool passwordReq(string password)
{
    //check for length

    //check if all upper and all lower are the same

    //cycle over string to see for # or special characters (password.length())
}
*/