/*
  Name: Henok Tilahun, 5007740928, 1021, Assignment 2
  Description: Displays UNLV Zoo along with other information based on
  user's input
  Input: month, number of zebras, number of rabbits
  Output: UNLV Zoo logo along with calculations that are based on the
  user's input
*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
/*
  FUNCTION_IDENTIFIER: Displays the UNLV Logo along with a welcome 
  banner
  parameters: N/A
  return value: Void returns nothing
*/
void display_UNLV()
{
    //display the UNLV Zoo Logo

    std::cout << "+---------------------------------------------------";
    std::cout << "------------------------+\n";
    std::cout << "|    UU     UU  NNNN     NN  LL       VV      VV   ";
    std::cout << "      CCCCCC    SSSSSSSS |\n";
    std::cout << "|   /UU    /UU /NN/NN   /NN /LL      /VV     /VV    ";
    std::cout << "    CC////CC  SS//////  |\n";
    std::cout << "|   /UU    /UU /NN//NN  /NN /LL      /VV     /VV  ";
    std::cout << "     CC    //  /SS        |\n";
    std::cout << "|   /UU    /UU /NN //NN /NN /LL      //VV    VV   ";
    std::cout << "    /CC        /SSSSSSSSS |\n";
    std::cout << "|   /UU    /UU /NN  //NN/NN /LL       //VV  VV     ";
    std::cout << "   /CC        ////////SS |\n";
    std::cout << "|   /UU    /UU /NN   //NNNN /LL        //VVVV      ";
    std::cout << "   //CC    CC        /SS |\n";
    std::cout << "|   //UUUUUUU  /NN    //NNN /LLLLLLLL   //VV       ";
    std::cout << "    //CCCCCC   SSSSSSSS  |\n";
    std::cout << "|    ///////   //      ///  ////////     //         ";
    std::cout << "     //////   ////////  |\n";
    std::cout << "|                                                  ";
    std::cout << "                         |\n";
    std::cout << "|             ZZZZZZZZ           OOOOOOO        ";
    std::cout << " OOOOOOO                    |\n";
    std::cout << "|                 /ZZ           OO/////OO    ";
    std::cout << "   OO/////OO                   |\n";
    std::cout << "|                /ZZ           OO     //OO     OO  ";
    std::cout << "   //OO                  |\n";
    std::cout << "|               /ZZ           /OO      /OO    /OO ";
    std::cout << "     /OO                  |\n";
    std::cout << "|              /ZZ            /OO      /OO    /OO ";
    std::cout << "     /OO                  |\n";
    std::cout << "|             /ZZ             //OO     OO     //OO ";
    std::cout << "    OO                   |\n";
    std::cout << "|           //ZZZZZZZZZZ       //OOOOOOO      ";
    std::cout << " //OOOOOOO                    |\n";
    std::cout << "|           ///////////         ///////      ";
    std::cout << "   ///////                     |\n";
    std::cout << "+-----------------------------------------------";
    std::cout << "----------------------------+\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "*************************************************";
    std::cout << "****************************\n";
    std::cout << "             Welcome to the UNLV Zoo - Food Supply ";
    std::cout << "Department!\n";
    std::cout << "*************************************************";
    std::cout << "****************************\n";
    std::cout << "\n";
}
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main()
{
    //display the heading code from above
    display_UNLV();

    //initalize global const
    const double LIL_ZEB = 5; //food baby zebra needs
    const double GROWTH_RATE_ZEBRA = 0.05;
    const double LIL_RAB = 0.5; //food baby rabbot needs
    const double GROWTH_RATE_RABBIT = .10;
  
    //initalize global variables
    int num_of_month = 0; //UI
    double updated_zebra = 0.0; //updated food supply for grown zebra
    double updated_rabbit = 0.0; //updated food supply for grown rabbit
    int times_more_food = 0;//how much more zebras eat than rabbits
    int num_of_zebra = 0; //total zebra pop
    int num_of_rabbit = 0; //total zebra pop
    //food needed to feed zebra pop for num_of_months
    double total_food_zebra = 0.0;
    //food needed to feed rabbit pop for num_of_months
    double total_food_rabbit = 0.0;
    double total_food = 0.0; //food needed for both

    //display const and ask for num_of_month
    std::cout << "The food/day for a baby zebra is constant (lbs): ";
    std::cout << LIL_ZEB << "\n";
    std::cout << "The food/day for a baby rabbit is constant (lbs): ";
    std::cout << LIL_RAB << "\n";
    std::cout << "After growing the number of months: \n**";
    std::cin >> num_of_month;

    //calculate food/day needed for bigger zebra and rabbits
    updated_zebra =LIL_ZEB*pow((1+GROWTH_RATE_ZEBRA),num_of_month);
    updated_rabbit=LIL_RAB*pow((1+GROWTH_RATE_RABBIT),num_of_month);

    //display the calculations
    std::cout << std::setprecision(2);
    std::cout << std::fixed << "The food/day for a bigger zebra is: ";
    std::cout << updated_zebra << "\n";
    std::cout << std::fixed << "The food/day for a bigger rabbit is: ";
    std::cout << updated_rabbit << "\n";

    //calculate how many times more zebra eats than rabbits
    times_more_food = updated_zebra / updated_rabbit;
    std::cout << "Zebra eats " << times_more_food;
    std::cout << " times as much as rabbits\n\n";

    //ask for number of zebras and rabbits
    std::cout << "The number of Zebra: \n**";
    std::cin >> num_of_zebra;
    std::cout << "The number of Rabbit: \n**";
    std::cin >> num_of_rabbit;

    //calculate total food/day for zebras and rabbits
    total_food_zebra = updated_zebra * num_of_zebra;
    total_food_rabbit = updated_rabbit * num_of_rabbit;
    total_food = total_food_rabbit + total_food_zebra;

    //display calculations
    std::cout << "For Zebras, total food/day in " << num_of_month;
    std::cout << " months is: " << total_food_zebra << "\n";
    std::cout << "For Rabbits, total food/day in " << num_of_month;
    std::cout << " months is: " << total_food_rabbit << "\n";
    std::cout << "Overall, total food/day in " << num_of_month;
    std::cout << " months is: " << total_food << "\n";

    //display the tickets
    std::cout <<std::setfill(' ')<<std::fixed<<std::setprecision(2);
    std::cout << "\n/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\";
    std::cout << "/\\/\\/\\/\\/\\/\\/\\/\\\n";
    std::cout << "|                                      |\n";
    std::cout << "|             UNLV CS Zoo              |\n";
    std::cout << "|         4505 S Maryland Pkwy         |\n";
    std::cout << "|          Las Vegas,NV 89154          |\n";
    std::cout << "|            (702) 895-3011            |\n";
    std::cout << "|" << std::setw(40) << "|\n";
    std::cout << "|" << std::setw(40) << "|\n";
    std::cout << "| " << "Baby Zebra(lbs/d):" << std::setw(18);
    std::cout << LIL_ZEB << " |\n";
    std::cout << "| " << "Growth Rate(month):" << std::setw(17);
    std::cout << "5.00%" << " |\n";
    std::cout << "| " << "Baby Rabbit(lbs/d):" << std::setw(17);
    std::cout << LIL_RAB << " |\n";
    std::cout << "| " << "Growth Rate(month):" << std::setw(17);
    std::cout << "10.00%" << " |\n";
    std::cout << "|" << std::setw(40) << "|\n";
    std::cout << "| " << "Growth Month:" << std::setw(23);
    std::cout << num_of_month << " |\n";
    std::cout << "| " << "Grown Zebra(lbs/d):" << std::setw(17);
    std::cout << updated_zebra << " |\n";
    std::cout << "| " << "Grown Rabbit(lbs/d):" << std::setw(16);
    std::cout << updated_rabbit << " |\n";
    std::cout << "|" << std::setw(40) << "|\n";
    std::cout << "| " << "Zebra amount:" << std::setw(23);
    std::cout << num_of_zebra << " |\n";
    std::cout << "| " << "Rabbit amount:" << std::setw(22);
    std::cout << num_of_rabbit << " |\n";
    std::cout << "| " << "Total Food(lbs/d):" << std::setfill('*');
    std::cout << std::setw(18) << ceil(total_food) << " |\n";
    std::cout << std::setfill(' ');
    std::cout << "|" << std::setw(40) << "|\n";
    std::cout << "\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\";
    std::cout << "/\\/\\/\\/\\/\\/\\/\\/\n";

    return 0;
}