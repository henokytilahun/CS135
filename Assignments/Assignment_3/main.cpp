/*
Name: Henok Tilahun, 5007740928, 1021, Assignment 3
Description: Takes age, weight, height, gender,
and activity level into account to create an accurate BMR
and then an AMR to display the amount of calories needed to 
maintain weight, lose weight, and gain weight
Input: age, weight, height, gender, activity level
Output: Text (general feedback/directions), numbers about
how to maintain, gain, and lose weight
*/
#include <iostream>
#include <cmath>
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
    double BMR = 0.0;
    double AMR = 0.0;
    double lose_w = 0.0;
    double gain_w = 0.0;

    // call heart display function
    heart_display();

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

    switch (sex)
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

    // calculate BMR
    if (sex == 'M' || sex == 'm')
    {
        BMR = 65 + (6.2 * weight) + (12.7 * height) - (6.8 * age);
    }
    else if (sex == 'F' || sex == 'f')
    {
        BMR = 655 + (4.3 * weight) + (4.3 * height) - (4.7 * age);
    }

    // activity Level
    cout << "Select activity level:\n"
         << "1. Inactive: little to no exercise.\n"
         << "2. Lightly active: Exercising 1 - 3 days/week\n"
         << "3. Moderately active: Exercising 3 - 5 days/week\n"
         << "4. Active: Exercising 6 - 7 days/week\n"
         << "5. Very active: Exercising hard 6 - 7 days/week\n";
    cin >> act_lvl;
    switch (act_lvl)
    {
    case 1:
        AMR = BMR * 1.2;
        break;
    case 2:
        AMR = BMR * 1.375;
        break;
    case 3:
        AMR = BMR * 1.55;
        break;
    case 4:
        AMR = BMR * 1.725;
        break;
    case 5:
        AMR = BMR * 1.9;
        break;
    default:
        cout << "Invalid activity level!";
        return 0;
    }

    // Calculate Calories for Gaining and Losing Weight
    lose_w = AMR - (AMR * .2);
    gain_w = (AMR * .2) + AMR;

    cout << "To maintain your current weight, you need to consume an"
         << " average of " << round(AMR) << " calories/day.\n";
    cout << "To lose weight, you need to consume an average of "
         << round(lose_w) << " calories/day.\n";
    cout << "To gain weight, you need to consume an average of "
         << round(gain_w) << " calories/day.\n\n";
    cout << "*Disclaimer: always consult your doctor before committing"
         << " to a diet plan";

    return 0;
}