/*
  Name: Henok Tilahun, 5007740928, 1021, Assignment 1
  Description: Determins the number of busses is need for a trip along
  with how expensive it will be and how much money is going to be left
  over.
  Input: class size and money avialable
  Output: # of buses, cost of tickets, tax, and left over money.
*/
//libraries included
#include <iostream>
#include <iomanip>
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main() 
{
  //initalize global variables
  int people = 0;
  double money = 0.0;
  //ask user for class size
  std::cout << "How many people are in the class?";
  std::cin >> people;
  //ask user for the amount of money avialable
  std::cout << " How much money is in the pool? ";
  std::cin >> money;
  //calculate # of busses needed
  double num_of_bus = static_cast<int>(people + 11)/12;
  //Calculate total ticket cost
  double total_tickets = people * 7.95;
  
  //calculate tax
  double tax = static_cast<int>(total_tickets * 6.85)/100.0;
  
  //calculate money left over for people
  double left_over = (money-total_tickets-tax)/people;
  left_over = static_cast<int> (left_over*100)/100.0;

  //display the results here
  std::cout << "$" << num_of_bus << " Buses need to be reserved.\n";
  std::cout << "Tickets will cost $" << total_tickets << std::endl;
  std::cout << "Tax will be $" << tax << std::endl;
  std::cout << "Each person will have $";
  std::cout << left_over << " for food.";

  return 0;
}