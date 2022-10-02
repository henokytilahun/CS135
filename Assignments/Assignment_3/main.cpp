/*
Place your header comment here
*/
#include <iostream>
using namespace std;

void heart_display()
{
    cout << endl
         << ".@  @, (&           .(%(.               *#(,              .   \n"
         << "(@  @( &@      .@@@@@@@@@@@@@#     @@@@@@@@@@@@@#        @@@. \n"
         << "(@  @( &@    /@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@    .@@@@@,\n"
         << "(@@@@@@@@   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   .@@@@@,\n"
         << "(@@@@@@@@   @@@@@@@@@@@@@@@@  .@@@@@@@@@@@@@@@@@@@@@(  .@@@@@,\n"
         << " @@@@@@@#   @@@@@@@@@@@@@@      @@@@@@@@@@@@@@@@@@@@/  .@@@@@,\n"
         << "    @@.     &@@@@@@@@@@@.   @@   @@@@@@@@@@@@@@@@@@@   .@@@@@,\n"
         << "    @@.                   @@@@@   @@@@                 .@@@@@,\n"
         << "    @@.       #@@@@@@@@@@@@@@@@@   &#  .@@@@@@@@@@     .@@@@@,\n"
         << "    @@.         @@@@@@@@@@@@@@@@@.    %@@@@@@@@@#         ,@@,\n"
         << "    @@.           @@@@@@@@@@@@@@@@,  @@@@@@@@@%           ,@@.\n"
         << "    @@.             %@@@@@@@@@@@@@@@@@@@@@@@.             ,@@,\n"
         << "    @@.                %@@@@@@@@@@@@@@@@@,                ,@@,\n"
         << "    @@.                    &@@@@@@@@@,                    ,@@,\n"
         << "    @@.                     &@@@@@,                       ,@@,\n"
         << endl
         << "             Welcome to the Calorie Calculator App\n";
}

int main()
{

    // initalize global variables
    int age = 10;
    int weight = 50;
    int height = 40;
    char sex = 'M';
    int act_lvl = 0;

    // ask user for age
    cout << "To get started, enter your age in years:\n";
    cin >> age;
    if (cin.fail())
    {
        cout << "Invalid Age!\n";
        return 0;
    }
    else if (age < 10 || age > 79)
    {
        cout << "Age must be between 10 and 79 years!\n";
        return 0;
    }

    // ask user for weight
    cout << "Enter weight in lbs:\n";
    cin >> weight;
    if (cin.fail())
    {
        cout << "Invalid weight!\n";
        return 0;
    }
    else if (weight < 50 || weight > 400)
    {
        cout << "Weight must be between 50 lbs and 400 lbs!\n";
        return 0;
    }

    // ask user for height
    cout << "Enter height in inches:\n";
    cin >> height;

    if (cin.fail())
    {
        cout << "Invalid height!\n";
        return 0;
    }
    else if (height < 40 || height > 90)
    {
        cout << "Heigh must be between 40\" and 90\"!\n";
        return 0;
    }

    // ask for user Gender
    cout << "Enter 'M' for male or 'F' for female:\n";
    cin >> sex;

    switch(sex)
    {
        case 'M':
            sex = 'M';
            break;
        case 'm':
            sex = 'm';
            break;
        case 'F':
            sex = 'F';
            break;
        case 'f':
            sex = 'f';
            break;
        default:
            cout << "Invalid entry!";
            return 0;
    }

    

    return 0;
}