#include <iostream>
using namespace std;

void print (string a[], int size);
void print (int a[], int size);

int main()
{
    string s [] = {"s1","s2","s3","s4","s5"};
    print (s,5);
    int p[] = {1,2,3,4,5};
    return 0;
}

void print (string a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void print (int a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}