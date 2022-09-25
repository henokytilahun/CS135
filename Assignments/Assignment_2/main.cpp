#include <iostream>
#include <cmath>
#include <iomanip>

void display_UNLV()
{
  //display the UNLV Zoo Logo

  std::cout << "+---------------------------------------------------------------------------+\n";
  std::cout << "|    UU     UU  NNNN     NN  LL       VV      VV         CCCCCC    SSSSSSSS |\n";
  std::cout << "|   /UU    /UU /NN//NN  /NN /LL      /VV     /VV       CC    //  /SS        |\n";
  std::cout << "|   /UU    /UU /NN //NN /NN /LL      //VV    VV       /CC        /SSSSSSSSS |\n";
  std::cout << "|   /UU    /UU /NN  //NN/NN /LL       //VV  VV        /CC        ////////SS |\n";
  std::cout << "|   /UU    /UU /NN   //NNNN /LL        //VVVV         //CC    CC        /SS |\n";
  std::cout << "|   //UUUUUUU  /NN    //NNN /LLLLLLLL   //VV           //CCCCCC   SSSSSSSS  |\n";
  std::cout << "|    ///////   //      ///  ////////     //              //////   ////////  |\n";
  std::cout << "|                                                                           |\n";
  std::cout << "|             ZZZZZZZZ           OOOOOOO         OOOOOOO                    |\n";
  std::cout << "|                 /ZZ           OO/////OO       OO/////OO                   |\n";
  std::cout << "|                /ZZ           OO     //OO     OO     //OO                  |\n";
  std::cout << "|               /ZZ           /OO      /OO    /OO      /OO                  |\n";
  std::cout << "|              /ZZ            /OO      /OO    /OO      /OO                  |\n";
  std::cout << "|             /ZZ             //OO     OO     //OO     OO                   |\n";
  std::cout << "|           //ZZZZZZZZZZ       //OOOOOOO       //OOOOOOO                    |\n";
  std::cout << "|           ///////////         ///////         ///////                     |\n";
  std::cout << "+---------------------------------------------------------------------------+\n";
  std::cout << "\n";
  std::cout << "\n";
  std::cout << "*****************************************************************************\n";
  std::cout << "             Welcome to the UNLV Zoo - Food Supply Department!\n";
  std::cout << "*****************************************************************************\n";
  std::cout << "\n";
}


int main()
{
  //display the heading code from above
  //display_UNLV();

  //initalize global const
  const double LITTLE_ZEBRA = 5; //food baby zebra needs
  const double GROWTH_RATE_ZEBRA = 0.05;
  const double LITTLE_RABBIT = 0.5; //food baby rabbot needs
  const double GROWTH_RATE_RABBIT = .10;
  
  //initalize global variables
  int num_of_month = 0; //UI
  double updated_zebra = 0.0; //updated food supply for grown zebra
  double updated_rabbit = 0.0; //updated food supply for grown rabbit
  int times_more_food = 0;//how much more zebras eat than rabbits
  int num_of_zebra = 0; //total zebra pop
  int num_of_rabbit = 0; //total zebra pop
  double total_food_zebra = 0.0; //food needed to feed zebra pop for num_of_months
  double total_food_rabbit = 0.0; //food needed to feed rabbit pop for num_of_months
  double total_food = 0.0; //food needed for both

  //display const and ask for num_of_month
  std::cout << "The food/day for a baby zebra is constant (lbs): " << LITTLE_ZEBRA << "\n";
  std::cout << "The food/day for a baby rabbit is constant (lbs): " << LITTLE_RABBIT << "\n";
  std::cout << "After growing the number of months: \n**";
  std::cin >> num_of_month;

  //calculate food/day needed for bigger zebra and rabbits
  updated_zebra = LITTLE_ZEBRA * std::pow((1 + GROWTH_RATE_ZEBRA), num_of_month);
  updated_rabbit = LITTLE_RABBIT * std::pow((1 + GROWTH_RATE_RABBIT), num_of_month);

  //display the calculations
  std::cout << std::setprecision(2);
  std::cout << std::fixed << "The food/day for a bigger zebra is: " << updated_zebra << "\n";
  std::cout << std::fixed << "The food/day for a bigger rabbit is: " << updated_rabbit << "\n";

  //calculate how many times more zebra eats than rabbits
  times_more_food = updated_zebra / updated_rabbit;
  std::cout << "Zebra eats " << times_more_food << " times as much as rabbits\n\n";

  //ask for number of zebras and rabbits
  std::cout << "The number of Zebra: \n**";
  std::cin >> num_of_zebra;
  std::cout << "The number of Rabbit: \n**";
  std::cin >> num_of_rabbit;

  //calculate total food/day for zebras and rabbits
  total_food_zebra = updated_zebra * num_of_zebra;
  total_food_rabbit = updated_rabbit * num_of_rabbit;

  //display calculations
  std::cout << "For Zebras, total food/day in " << num_of_month << " months is: " << total_food_zebra << "\n";
  std::cout << "For Rabbits, total food/day in " << num_of_month << " months is: " << total_food_rabbit << "\n";
  
  
  return 0;
}