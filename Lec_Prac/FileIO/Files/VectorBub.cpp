#include <iostream>
#include <vector>

void updateVector(std::vector<int> v);
void printVector(std::vector<int> v);

int main ()
{
    std::vector<int> v = {1,2,3,4,5};

    updateVector(v);
    printVector(v);
    return 0;
}

void updateVector(std::vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        v[i]*=2;
    }
}

void printVector(std::vector<int> v)
{
    for(int num : v)
    {
        std::cout << num << "\n";
    }
    std::cout << "\n";
}