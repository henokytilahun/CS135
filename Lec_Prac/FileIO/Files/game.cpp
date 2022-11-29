#include <iostream>
using namespace std;

struct weapon
{
    string name;
    int damage;
    int cost;

    void info ()
    {
        cout << name << " Damage: up to " << damage << " cost: " << cost << " health points.\n";
    }
};

struct BadGuy
{
    string name;
    int health = 100;
};

struct hero
{
    string name;
    int health = 100;
    weapon weap[3];
    void attack(weapon w, BadGuy &bg)
    {
        //rand()%x  gives a random # >= 0 < x
        int attackPower = (rand() % w.damage) +1;
        bg.health -= attackPower;
        cout << "Attack power = " << attackPower;
        health -= w.cost;
        health -= 5;
        cout << "\n";
    }
};

weapon createWeapon(string wName, int wDamage)
{
    weapon temp;
    temp.name = wName;
    temp.damage = wDamage;
    temp.cost = wDamage/3;
    return temp;
}

int main()
{
    cout << "____________ CS 135 Hero _____________\nEnter a name for your hero:\n";
    hero h1;
    string heroName = "";
    getline(cin, heroName);
    h1.name = heroName;

    cout << "Cool!\nLet's create some hero weapons:\n";
    for(int i = 0; i < 3; i++)
    {
        cout << "Enter weapon name:\n";
        string weaponName = "";
        getline(cin, weaponName);
        cout << "Max damage (will affect weapon cost!):\n";
        int weaponDamage;
        cin >> weaponDamage;
        cin.clear();
        cin.ignore(100, '\n');
        h1.weap[i] = createWeapon(weaponName, weaponDamage);
    }   
    
    cout << "Done!\nLet's fight the bad guy\nFirst, lets give them a name:";
    string bgName = "";
    getline(cin, bgName);
    BadGuy bg1;
    bg1.name = bgName;

    do
    {
       cout << h1.name << "'s health: " << h1.health << "\t\t\t\t" 
       << bg1.name << "'s health: " << bg1.health << "\n";
        for(int i = 0; i < 3; i++)
        {
            cout << i+1 << ": ";
            h1.weap[i].info();
        }

        cout << "Select a weapon:\n";
        int selection;
        cin >> selection;
        h1.attack(h1.weap[selection-1], bg1);
        cout << "Evil attack , -5\n";
    } while (h1.health > 0 && bg1.health > 0);
    
    if(h1.health <= 0)
    {
        cout << "Sucks...:(";
    } else
    {
        cout << h1.name << " saved the world! :)";
    }

    return 0;
}