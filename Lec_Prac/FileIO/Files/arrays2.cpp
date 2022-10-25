#include <iostream>
#include <vector>

int main()
{
    //declaring a vector: no slots, no data
    std::vector<int>v1;
    //error: segmentation fault (accessing a memory location that doesn't belong to you)
    //v1[0] = 100; 

    //adding elements is done using push_back(element) or insert(iterator, element)

    v1.push_back(10); // adds element to the end of the vector
    v1.insert(v1.begin(), 15);
    v1.insert(v1.end()-1, 20);
    v1.pop_back();

    v1.erase(v1.begin());

    std::cout << std::boolalpha << v1.empty() << std::endl;

    if(!v1.empty())//returns a boolean
    {
        //runs when v1 is not empty
    } 

    v1.clear(); //removes all elements


    //declaring a vector with an inital size: has slots, garbage data
    //syntax: vetor<dataType> vectorName (size);

    std::vector<int> v2(10);

    for(int temp : v2)
    {
        std::cout << temp << std::endl;
    }

    std::string str = "Hello CS135";

    for(char temp : str)
    {
        std::cout << temp << "\n";
    }

    //conditions: you have to go from front to back
    //conditions: You have to read the entire thing
    //Conditions: You cann't (by default) keep track of the index
    //Conditions: You can only use for reading
    return 0;
}