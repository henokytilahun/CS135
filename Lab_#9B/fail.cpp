/*
  Name: Henok Tilahun, 5007740928, 1021, 9B
  Description: Gets input from user using user-defined functions.
  Check for failure using user defined funcitions. Calculate
  addition and multiplication for ints. Also does string
  concactination.
  Input: Ints beteen 1 and 50 and 2 stringss
  Output: ints and strings
*/
#include <iostream>
// define standard namespace
using std::string;
using std::cout;
using std::cin;
using std::endl;
// define user-functions
int getIntInput(string prompt);
bool checkInput(int input);
string getStringInput(string prompt);
int add(int num1, int num2);
string s_add(string str1, string str2);
int multiply(int num1, int num2);
string s_multiply(string str, int num);
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main()
{
    string prompt1 = "Enter an integer between 1 and 50\n**";
    string prompt2 = "Enter another integer between 1 and 50\n**";
    string prompt3 = "Enter a string\n**";
    string prompt4 = "Enter another string\n**";

    int int1 = getIntInput(prompt1);
    while(checkInput(int1) == false)
    {
        if(cin.fail() || int1 > 50 || int1 < 1)
        {
            cout << "\nError: Invalid Input!\n";
            cin.clear();
            cin.ignore(100, '\n');
            int1 = getIntInput(prompt1);
            checkInput(int1);
        }
    }
    cout << "\n";
    int int2 = getIntInput(prompt2);
    while(checkInput(int2) == false)
    {
        if(cin.fail() || int2 > 50 || int2 < 1)
        {
            cout << "\nError: Invalid Input!\n";
            cin.clear();
            cin.ignore(100, '\n');
            int2 = getIntInput(prompt2);
            checkInput(int2);
        }
    }
    cout << "\n";
    string str1 = getStringInput(prompt3);
    cout << "\n";
    string str2 = getStringInput(prompt4);

    int addi = add(int1, int2);
    string str_addi = s_add(str1, str2);
    int multi = multiply(int1, int2);
    string mul_str1 = s_multiply(str1, int1);
    string mul_str2 = s_multiply(str2, int2);

    cout << "\n";
    cout << int1 << " + " << int2 << " = " << addi << "\n";
    cout << str1 << " + " << str2 << " = " << str_addi << "\n";
    cout << int1 << " * " << int2 << " = " << multi << "\n";
    cout << str1 << " * " << int1 << " = " << mul_str1 << "\n";
    cout << str2 << " * " << int2 << " = " << mul_str2 << "\n";
    return 0;
}
// initalize user-functions
/*
  FUNCTION_IDENTIFIER: Get's user input.
  parameters: string
  return value: returns int
*/
int getIntInput(string prompt)
{
    int input = 0;
    cout << prompt;
    cin >> input;
    return input;
}
/*
  FUNCTION_IDENTIFIER: Checks if input is not int or above max or 
  below min.
  parameters: int
  return value: returns boolean
*/
bool checkInput(int input)
{
    if(cin.fail() || input > 50 || input < 1)
    {
        return false;
    }
    return true;
}
/*
  FUNCTION_IDENTIFIER: Get's user input.
  parameters: string
  return value: returns string
*/
string getStringInput(string prompt)
{
    string str = "";
    cout << prompt;
    cin >> str;

    return str;
}
/*
  FUNCTION_IDENTIFIER: adds two ints.
  parameters: ints
  return value: returns int
*/
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
/*
  FUNCTION_IDENTIFIER: adds two strings.
  parameters: strings
  return value: returns string
*/
string s_add(string str1, string str2)
{
    string str = str1 + str2;
    return str;
}
/*
  FUNCTION_IDENTIFIER: multiplies two ints.
  parameters: ints
  return value: returns int
*/
int multiply(int num1, int num2)
{
    int mul = num1 * num2;
    return mul;
}
/*
  FUNCTION_IDENTIFIER: concactinates two strings.
  parameters: string and int
  return value: returns string
*/
string s_multiply(string str, int num)
{
    string newStr = "";
    for(int i = 0; i < num; i++)
    {
        newStr += str;
    }
    return newStr;
}