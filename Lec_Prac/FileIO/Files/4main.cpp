#include<iostream>
#include<vector>

int main()
{
    std::vector<std::string> friends = {"Henok", "Amberber", "Ergetachew"};

    friends.push_back("Betti");
    friends.pop_back();
    friends.insert(friends.begin(), "Jonatan");
    friends.insert(friends.begin() + 1, "Joni");
    friends.insert(friends.end() -1, "Matti");
    friends.erase(friends.begin());
    
    std::cout << friends.size() << std::endl;
    for(std::string fri : friends)
    {
        std::cout << fri << "\n";
    }
    return 0;
}