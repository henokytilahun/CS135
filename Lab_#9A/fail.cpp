#include <iostream>
#include <iomanip>

void getDoubleInputs(double &input1, double &input2);
double getDoubleInput(std::string prompt, double min, double max);
bool checkFailure(double input, double min, double max);
void addSubtract(double &input1, double &input2);
void multipyDivide(double &input1, double &input2);

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

    std::cout <<"\n" <<add << "\n" << sub << "\n" << mul << "\n" << div;
    return 0;
}

double getDoubleInput(std::string prompt, double min, double max)
{
    double num1 = 0.0;
    std::cout << prompt << "\n**";
    std::cin >> num1;
    return num1;
}

bool checkFailure(double input, double min, double max)
{
    if (std::cin.fail() || input > max || input < min)
    {
        return false;
    }
    return true;
}

void getDoubleInputs(double &input1, double &input2)
{
    int i = 0;
    double in1 = 0.0;
    double in2 = 0.0;
    if(i < 1)
    {
        double in1 = input1;
        double in2 = input2;
        i++;
    } else
    {
        input1 = in1;
        input2 = in2;
    }
}

void addSubtract(double &input1, double &input2)
{
    double in1 = input1;
    double in2 = input2;
    input1 = in1 + in2;
    input2 = in1 - in2;
}
void multipyDivide(double &input1, double &input2)
{
    double in1 = input1;
    double in2 = input2;
    input1 = in1 * in2;
    input2 = in1 / in2;
}