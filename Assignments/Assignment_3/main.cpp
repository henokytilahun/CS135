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
    int age = 10;
    int weight = 50;
    int height = 40;
    char sex = 'M';
    int act_lvl = 0;

    //ask user for age
    cout << "To get started, enter your age in years:\n";
    do
    {
      if(cin.fail())
      {
        cout << "Invalid Age!\n";
        cin.clear();
        cin.ignore(100,'\n');
      } else if (age < 10 || age > 79)
      {
        cout << "Age must be between 10 and 79 years!\n";
        cin.clear();
        cin.ignore(100,'\n');
      }
      cin >> age;
    } while (cin.fail() || age < 10 || age > 79);

    //ask user for weight
    cout << "Enter weight in lbs:\n";
    do
    {
      if(cin.fail())
      {
        cout << "Invalid weight!\n";
        cin.clear();
        cin.ignore(100,'\n');
      } else if(weight < 50 || weight > 400)
      {
        cout << "Weight must be between 50 lbs and 400 lbs!\n";
        cin.clear();
        cin.ignore(100,'\n');
      }
      cin >> weight;
    } while (cin.fail() || weight < 50 || weight > 400);


    //ask user for height
    cout << "Enter height in inches:\n";

    do
    {
      if(cin.fail())
      {
        cout << "Invalid height!\n";
        cin.clear();
        cin.ignore(100,'\n');
      } else if(height < 40 || height > 90)
      {
        cout << "Heigh must be between 40\" and 90\"!\n";
        cin.clear();
        cin.ignore(100,'\n');
      }
      cin >> height;
    } while (cin.fail() || height < 40 || height > 90);

    //ask for user Gender
    cout << "Enter 'M' for male or 'F' for female:\n";
    do
    {
        if(cin.fail())
        {
            cout << "Invalid Entry!\n";
            cin.clear();
            cin.ignore(100,'\n');
        } else if((sex!='M')||(sex!='m')||(sex!='F')||(sex!='f'))
        {
            cout << "Invalid Entry!\n";
            cin.clear();
            cin.ignore(100,'\n');
        }
        cin >> sex;
    
    }while(cin.fail()||(sex!='M')||(sex!='m')||(sex!='F')||(sex!='f'));




    return 0;
}