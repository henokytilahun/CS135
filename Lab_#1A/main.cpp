/*
    Name: Henok Tilahun, 5007740928, 1021, lab 1A
    Description: Once run, equations that calculate value of numbers is shown"
    Input: N/A
    Output: All the formulas with the proper calculations
*/
#include <iostream>
/*
    Function_Identifier: Called by OS when program is run
    parameters: N/A
    return_value: 0
*/
int main ()
{
    //Initalize constants
    const int a = 5; 
    const int b = 2; 
    const double c = 5.0;
    const double d = 2.0;

    //calculates then stores results into initalized variables
    int add = a + b;
    int sub = a - b;
    int multi = a * b;
    int divi = a / b;
    int mod = a % b;
    double ddivi = c / d;

    //displays results to user through terminal
    std::cout << "5 + 2 = " << add << std::endl;
    std::cout << "5 - 2 = " << sub << std::endl;
    std::cout << "5 * 2 = " << multi << std::endl;
    std::cout << "5 / 2 = " << divi << std::endl;
    std::cout << "5 % 2 = " << mod << std::endl;
    std::cout << "5.0 / 2.0 = " << ddivi << std::endl;
    return 0;
}