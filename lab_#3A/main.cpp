/*
    Name: Henok Tilahun, 5007740928, 1021, Lab 3A
    Description: Once run, program will reads and compares inputs then
    displays the greater greater value
    Input: Degrees
    Output: Radians, sin calculations, cos calculations, tan calculations
*/
#include <iostream>
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: return s
*/
int main() {
  // initalize variables
  float first_f = 0.0;
  float sec_f = 0.0;
  std::string str_1 = "";
  std::string str_2 = "";

  // ask for floating
  std::cout << "Enter a floating point number\n";
  std::cout << "**";
  std::cin >> first_f;
  std::cout << std::endl;

  // ask for anotehr floating
  std::cout << "Enter another floating point number\n";
  std::cout << "**";
  std::cin >> sec_f;
  std::cout << std::endl;

  // print out the two floating numbers
  std::cout << "You entered " << first_f << " and " << sec_f;
  std::cout << std::endl;

  // compare the two numbers
  if (first_f > sec_f) {
    std::cout << "The largest is " << first_f << "\n";
  } else {
    std::cout << "The largest is " << sec_f << "\n";
  }

  std::cout << std::endl;
  
  // ask for string
  std::cout << "Enter a string \n";
  std::cout << "**";
  std::cin >> str_1;
  std::cout << std::endl;

  // ask for another string
  std::cout << "Enter a second string \n";
  std::cout << "**";
  std::cin >> str_2;
  std::cout << std::endl;

  // print out the two strings
  std::cout << "You entered \"" << str_1 << "\" and \"" << str_2;
  std::cout << "\"" << std::endl;

  // compare strings
  if (str_1 > str_2) {
    std::cout << "The largest is \"" << str_1 << "\"";

  } else {
    std::cout << "The largest is \"" << str_2 << "\"";
  }
  return 0;
}