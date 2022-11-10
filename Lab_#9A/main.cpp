/*
  Name: Henok Tilahun, 5007740928, 1021, 8B
  Description: Gets input from user using user-defined functions.
  Check for failure using user defined funcitions. Calculate
  circumference and area using user defined functions.
  Input: double (radius)
  Output: doubles (radius, circumference, area)
*/
#include <iostream>
#include <iomanip>
// define user-functions
void getDoubleInputs(double &input1, double &input2);
double getDoubleInput(std::string prompt, double min, double max);
bool checkFailure(double input, double min, double max);
void addSubtract(double &input1, double &input2);
void multipyDivide(double &input1, double &input2);
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main ()
{
    std::string prompt1, prompt2;
    prompt1 = "Enter double between 0.500000 and 20.500000";
    prompt2 = "\nEnter another double between 0.500000 and 20.500000";
    double max = 20.5;
    double min = 0.5;
    double input1 = getDoubleInput(prompt1, min, max);
    while (checkFailure(input1, min, max) == false)
    {
        if(std::cin.fail() || input1 > max || input1 < min)
        {
            std::cout << "\nError: Invalid input!\n";
            std::cin.clear();
            std::cin.ignore(100, '\n');
            input1 = getDoubleInput(prompt1, min, max);
            checkFailure(input1, min, max);
        } 
        
    }
    double input2 = getDoubleInput(prompt2, min, max);
    while (checkFailure(input2, min, max) == false)
    {
        if(std::cin.fail() || input2 > max || input2 < min)
        {
            std::cout << "\nError: Invalid input!";
            std::cin.clear();
            std::cin.ignore(100, '\n');
            input2 = getDoubleInput(prompt2, min, max);
            checkFailure(input2, min, max);
        } 
        
    }
    getDoubleInputs(input1, input2);
    addSubtract(input1, input2);
    double add = input1;
    double sub = input2;
    getDoubleInputs(input1, input2);
    multipyDivide(input1, input2);
    double mul = input1;
    double div = input2;
    getDoubleInputs(input1, input2);

    std::cout << std::setprecision(2) << std::fixed << "\n";
    std::cout << input1 << " + " << input2 << " = " << add << "\n";
    std::cout << input1 << " - " << input2 << " = " << sub << "\n";
    std::cout << input1 << " * " << input2 << " = " << mul << "\n";
    std::cout << input1 << " / " << input2 << " = " << div << "\n";
    return 0;
}
// initalize user-functions
/*
  FUNCTION_IDENTIFIER: Get's user input.
  parameters: string, doubles
  return value: returns double
*/
double getDoubleInput(std::string prompt, double min, double max)
{
    double num1 = 0.0;
    std::cout << prompt << "\n**";
    std::cin >> num1;
    return num1;
}
/*
  FUNCTION_IDENTIFIER: Checks if input is not double or above max or 
  below min.
  parameters: doubles
  return value: returns boolean
*/
bool checkFailure(double input, double min, double max)
{
    if (std::cin.fail() || input > max || input < min)
    {
        return false;
    }
    return true;
}
/*
  FUNCTION_IDENTIFIER: Keeps track of initial values
  parameters: doubles
  return value: N/A
*/
void getDoubleInputs(double &input1, double &input2)
{
    static int i = 0;
    static double in1 = 0.0;
    static double in2 = 0.0;
    if(i < 1)
    {
        in1 = input1;
        in2 = input2;
        i++;
    } else
    {
        input1 = in1;
        input2 = in2;
    }
}
/*
  FUNCTION_IDENTIFIER: Does subtraction and addition and stores values
  in the paramaters
  parameters: doubles
  return value: N/A
*/
void addSubtract(double &input1, double &input2)
{
    double in1 = input1;
    double in2 = input2;
    input1 = in1 + in2;
    input2 = in1 - in2;
}
/*
  FUNCTION_IDENTIFIER: Does multiplication and division and stores values
  in the paramaters
  parameters: doubles
  return value: N/A
*/
void multipyDivide(double &input1, double &input2)
{
    double in1 = input1;
    double in2 = input2;
    input1 = in1 * in2;
    input2 = in1 / in2;
}