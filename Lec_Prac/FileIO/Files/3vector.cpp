#include <iostream>
#include <vector>

int main ()
{
    std::vector <std::vector<int> > v; //vector that contains vectors (2-D Vectors)

    std::vector <int> row1 = {1};
    std::vector <int> row2 = {2, 3};
    std::vector <int> row3 = {4,5,6};
    std::vector <int> row4 = {7,8,9,10};

    /*
    v.push_back(row1);
    v.push_back(row2);
    v.push_back(row3);
    v.push_back(row4);
    */
    v = {row1, row2, row3, row4};
    std::vector <int> v5 = {11,12};
    v.push_back(v5);
    //v[4].push_back(13);
    //v[3].pop_back();

    //v.erase(v.begin() +1);
    for(std::vector<int> temp : v)
    {
        for(int num : temp)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\n\nUsing regular for loops:\n";

    for(int i =0; i < v.size(); i++)
    {
        for(int j = 0; j < v[i].size(); j++)
        {
            std::cout << v[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    

    return 0;
}