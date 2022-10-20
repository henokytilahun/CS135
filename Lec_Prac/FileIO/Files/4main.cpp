#include<iostream>
#include<vector>

int main()
{
    std::vector<std::string> friends = {"Henok", "Amberber", "Ergetachew"};

    for(std::string fri : friends)
    {
        std::cout << fri << "\n";
    }
    return 0;
}