/*
  Name: Henok Tilahun, 5007740928, 1021, 8B
  Description: Gets input from user using user-defined functions.
  Check for failure using user defined funcitions. Calculate
  circumference and area using user defined functions.
  Input: double (radius)
  Output: doubles (radius, circumference, area)
*/
#include <iostream>
#include <cmath>
#include <iomanip>
// define user-functions
double getDoubleInput(std::string prompt, double min, double max);
bool checkFailure(double input, double min, double max);
double circumference(double r);
double area(double r);
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main()
{
    const double MIN = 0.500000;
    const double MAX = 20.500000;

    std::string prompt = "Enter a circle radius between " +
                         std::to_string(MIN) + " and " +
                         std::to_string(MAX) + "\n**";

    double r = getDoubleInput(prompt, MIN, MAX);
    checkFailure(r, MIN, MAX);
    while(checkFailure(r, MIN, MAX) == false)
    {
        if(std::cin.fail() || r < MIN || r > MAX)
        {
            std::cout << "\nError: Invalid radius!\n";
            std::cin.clear();
            std::cin.ignore(100, '\n');
            r = getDoubleInput(prompt, MIN ,MAX);
            checkFailure(r, MIN, MAX);
        }
    }
    double c = circumference(r);
    double a = area(r);

    std::cout << std::setprecision(2) << std::fixed
    << "\nRadius: " << r << "\nCircumference: " << c << "\nArea: " << a;
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
    double r = 0.0;
    std::cout << prompt;
    std::cin >> r;
    return r;
}
/*
  FUNCTION_IDENTIFIER: Checks if input is not double or above max or 
  below min.
  parameters: doubles
  return value: returns boolean
*/
bool checkFailure(double input, double min, double max)
{
    if (std::cin.fail() || input < min || input > max)
    {
        return false;
    }

    return true;
}
// Calculate circumference
/*
  FUNCTION_IDENTIFIER: gets circumference.
  parameters: double
  return value: returns double
*/
double circumference(double r)
{
    return 2* M_PI * r;
}
// calculate the area
/*
  FUNCTION_IDENTIFIER: Gets area
  parameters: double
  return value: returns double
*/
double area(double r)
{
    return M_PI * pow(r,2);
}