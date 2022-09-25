/*
    Name: Henok Tilahun, 5007740928, 1021, lab 1B
    Description: Takes numeral inputs and prints mathematical operations
    Input: Integers and Doubles
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
    //Declaring and initalize variables
    long long int a = 0, b = 0;
    double c = 0.0, d = 0.0;


    //Prompt user for the first and second integer then add user input respectivly
    std::cout << "Enter an integer" << std::endl;
    std::cout << "**";
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "Enter another integer" << std::endl;
    std::cout << "**";
    std::cin >> b;
    std::cout << std::endl;
    
    //Include the calculations for the integers
    int add = a + b;
    int sub = a - b;
    long long int multi = a * b;
    int divi = a / b;
    int mod = a % b;

    std::cout << a << " + " << b << " = " << add << std::endl;
    std::cout << a << " - " << b << " = " << sub << std::endl;
    std::cout << a << " * " << b << " = " << multi << std::endl;
    std::cout << a << " / " << b << " = " << divi << std::endl;
    std::cout << a << " % " << b << " = " << mod << std::endl;
    std::cout << std::endl;

    //Prompt user for the first and second double then add user input respectivly
    std::cout << "Enter a double" << std::endl;
    std::cout << "**";
    std::cin >> c;
    std::cout << std::endl;
    std::cout << "Enter another double" << std::endl;
    std::cout << "**";
    std::cin >> d;
    std::cout << std::endl;
    
    //Add the division along
    double divid = c / d;
    std::cout << c << " / " << d << " = " << divid << std::endl;

    return 0;
}