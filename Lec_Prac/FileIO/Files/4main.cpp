#include<iostream>
#include<vector>

int main()
{
    std::vector<std::string> friends = {"Henok", "Amberber", "Ergetachew"};

    friends.push_back("Betti");
    friends.pop_back();
    for(std::string fri : friends)
    {
        std::cout << fri << "\n";
    }
    return 0;
}