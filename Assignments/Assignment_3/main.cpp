/*
Place your header comment here
*/
#include<iostream>
using namespace std;

void heart_display()
{
    cout<<endl
    <<".@  @, (&           .(%(.               *#(,              .   \n"
    <<"(@  @( &@      .@@@@@@@@@@@@@#     @@@@@@@@@@@@@#        @@@. \n"
    <<"(@  @( &@    /@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@    .@@@@@,\n"
    <<"(@@@@@@@@   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   .@@@@@,\n"
    <<"(@@@@@@@@   @@@@@@@@@@@@@@@@  .@@@@@@@@@@@@@@@@@@@@@(  .@@@@@,\n"
    <<" @@@@@@@#   @@@@@@@@@@@@@@      @@@@@@@@@@@@@@@@@@@@/  .@@@@@,\n"
    <<"    @@.     &@@@@@@@@@@@.   @@   @@@@@@@@@@@@@@@@@@@   .@@@@@,\n"
    <<"    @@.                   @@@@@   @@@@                 .@@@@@,\n"
    <<"    @@.       #@@@@@@@@@@@@@@@@@   &#  .@@@@@@@@@@     .@@@@@,\n"
    <<"    @@.         @@@@@@@@@@@@@@@@@.    %@@@@@@@@@#         ,@@,\n"
    <<"    @@.           @@@@@@@@@@@@@@@@,  @@@@@@@@@%           ,@@.\n"
    <<"    @@.             %@@@@@@@@@@@@@@@@@@@@@@@.             ,@@,\n"
    <<"    @@.                %@@@@@@@@@@@@@@@@@,                ,@@,\n"
    <<"    @@.                    &@@@@@@@@@,                    ,@@,\n"
    <<"    @@.                     &@@@@@,                       ,@@,\n"
    <<endl
    <<"             Welcome to the Calorie Calculator App\n";
}



int main(){

    //initalize global variables
    int age = 0;
    int weight = 0;
    int height = 0;
    std::string sex = "";
    int act_lvl = 0;

    //ask user for age
    std::cout << "To get started, enter your age in years:\n";
    do
    {
      if(std::cin.fail())
      {
        std::cout << "Invalid Age!\n";
        std::cin.clear();
        std::cin.ignore(100,'\n');
      } else if (age < 10 || age > 79)
      {
        std::cout << "Age must be between 10 and 79 years!\n";
        std::cin.clear();
        std::cin.ignore(100,'\n');
      }
      std::cin >> age;
    } while (std::cin.fail() || age < 10 || age > 79);

    //ask user for weight
    std::cout << "Enter weight in lbs:\n";
    do
    {
      if(std::cin.fail())
      {
        std::cout << "Invalid weight!\n";
        std::cin.clear();
        std::cin.ignore(100,'\n');
      } else if(weight < 50 || weight > 400)
      {
        std::cout << "Weight must be between 50 lbs and 400 lbs!\n";
        std::cin.clear();
        std::cin.ignore(100,'\n');
      }
      std::cin >> weight;
    } while (std::cin.fail() || weight < 50 || weight > 400);


    //ask user for height
    std::cout << "Enter height in inches:\n";

    do
    {
      if(std::cin.fail())
      {
        std::cout << "Invalid height!\n";
        std::cin.clear();
        std::cin.ignore(100,'\n');
      } else if(height < 40 || height > 90)
      {
        std::cout << "Heigh must be between 40\" and 90\"!\n";
        std::cin.clear();
        std::cin.ignore(100,'\n');
      }
      std::cin >> height;
    } while (std::cin.fail() || height < 40 || height > 90);





    return 0;
}