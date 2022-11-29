#include <iostream>
#include <vector>
using namespace std;
//[IMPORTANT]Creating structs and creating instances of structs (at least 15 points on the Final Exam)
// creating struct
struct Pet
{
    string type = "pet";
    string name = "new pet";
    int age = 0;
    void info()
    {
        cout << "Type: " << type << "\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

struct Person
{
    string name;
    int age = 0; // setting 9 as a default value (May get a warning if not compliling with c++11 or above)

    Pet pet; // instance of struct within a struct
    // function inside structs
    vector<Pet> pets;
    void info()
    {
        cout << "Name: " << name << "\n"; // able to use name instead of p1.name bc of variable scope
        cout << "Age: " << age << "\n";   //^
        cout << "Pet Info:\n";
        // pet.info();
        for (Pet temp : pets)
        {
            temp.info();
        }
    }
};
// function that returns a struct
Pet createPetInstace(string petName, string petType, int petAge)
{
    Pet temp;
    temp.name = petName;
    temp.age = petAge;
    temp.type = petType;
    return temp;
}

int main()
{
    // creating struct instance
    Person p1;
    p1.name = "John Doe";
    p1.age = 20;
    Person p2;
    Person p3;
    Pet pet1;
    p1.pets.push_back(pet1);

    Pet pet2 = createPetInstace("Tom", "Cat", 1);
    pet2.info();
    p2.pets.push_back(pet2);
    // p3.pets.push_back(createPetInstace("Bobby", "Dog", 2)); <-- In a vector
    p3.pet = createPetInstace("Bobby", "Dog", 2); // not in a vector

    // p1.info();

    p2.name = "Bob";
    p2.age = 57;

    p3.name = "Sarah";
    p3.age = 24;
    // p2.info();
    // p3.info();

    Person instances[] = {p1, p2, p3};
    for (Person temp : instances)
    {
        temp.info();
    }
    return 0;
}