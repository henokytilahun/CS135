/*
  Name: Henok Tilahun, 5007740928, 1021, Lab2B
  Description: Reads radius from user and shows calculations in a 
               specific format.
  Input: radius
  Output: radius, circumference, and area.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: return s
*/
int main() {
  //initalize global constant
  double PI = 3.141592;
  //Ask user for radius and read it
  double radius = 0.0;
  std::cout << "Enter the radius of a circle\n" << "**";
  std::cin >> radius;
  std::cout << std::endl;
  
  //Calculate circumfrence
  double circumference = 2 * PI * radius;
  //Calculate the area
  double area = PI * (pow (radius, 2));

  //display using iomanip
  std::cout<< std::fixed;
  std::cout << "+--------+---------------+---------+" << std::endl;
  std::cout << "| radius | circumference | area    |" << std::endl;
  std::cout << "+--------+---------------+---------+" << std::endl;
  std::cout << "| " << std::left << std::setw(7) << std::setprecision(2) << radius << "| ";
  std::cout << std::left << std::setw(14) << std::setprecision(2) << circumference;
  std::cout << "| ";
  std::cout << std::left << std::setw(8) << std::setprecision(2) << area << "|";
  std::cout << std::endl;
  std::cout << "+--------+---------------+---------+" << std::endl;
  
  return 0;
}