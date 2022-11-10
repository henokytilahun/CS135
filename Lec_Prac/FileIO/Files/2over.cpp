#include <iostream>
#include <vector>
using namespace std;

void print (string a[], int size);
void print (int a[], int size);
void print (double a[], int size);
void print (vector<int> a);
void print (vector<vector<int> > a);
int main()
{
    string s [] = {"s1","s2","s3","s4","s5"};
    print (s,5);
    int p[] = {1,2,3,4,5};
    print (p,5);
    double d[] = {1.1,2.2,3.1,4.1,5.1};
    print (d,5);

    vector <int> v = {10,9,8,7,6};
    vector <vector<int> > vec = {{v}, {2,3,4}};
    print(v);
    print(vec);
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
void print (double a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void print (vector<int> a)
{
    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void print (vector<vector<int> > a)
{
    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < a.size(); j++)
        {
            cout << a[j][i] << " ";
        }
    }
    cout << endl;
}