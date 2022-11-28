/*
  Name: Henok Tilahun, 5007740928, 1021, 10A
  Description:  funcGets input from user using user-definedtions.
  Check for failure using user defined funcitions. Displays a 
  data sheet using a struct named studentType.
  Input: Ints, strings, and chars
  Output: chars, bools, ints, and void
*/
#include <iostream>
#include <iomanip>
// define standard namespace
using namespace std;
// define and initalize user-functions
/*
  FUNCTION_IDENTIFIER: Get's user input.
  parameters: string
  return value: returns string
*/
string getStudentData (string prompt)
{
    string input = "";
    cout << prompt;
    cin >> input;
    return input;
}
/*
  FUNCTION_IDENTIFIER: Get's user input.
  parameters: string
  return value: returns int
*/
int getGrade(string prompt)
{
    int input = 0;
    cout << prompt;
    cin >> input;
    return input;
}
/*
  FUNCTION_IDENTIFIER: Checks if input is lower than 0 or higher than 4
  parameters: int
  return value: returns boolean
*/
bool checkGradeLetter(int input)
{
    if(cin.fail() || input < 0 || input > 4)
    {
        return false;
    }
    return true;
}
/*
  FUNCTION_IDENTIFIER: Displays crossword sign.
  parameters: N/A
  return value: N/A
*/
void display(string first, string last, int grade, char letterGrade)
{
    cout << "\nData Entered" << "\n" << "  ";
    cout << "student.firstName" << std::setw(5) << "= " << first
    << "\n" << "  ";
    cout << "student.lastName" << std::setw(6) << "= " << last
    << "\n" << "  ";
    cout << "student.grade" << std::setw(9) << "= " << grade
    << "\n" << "  ";
    cout << "student.letterGrade" << std::setw(3) << "= " 
    << letterGrade << "\n";
}
/*
  FUNCTION_IDENTIFIER: Convers user's grade into letter grade.
  parameters: int
  return value: char
*/
char getLetterGrade(int input)
{
    switch (input)
    {
    case 0:
        return 'F';
        break;
    case 1:
        return 'D';
        break;
    case 2:
        return 'C';
        break;
    case 3:
        return 'B';
        break;
    default:
    return 'A';
    break;
    }
}
/*
  FUNCTION_IDENTIFIER: Struct for student.
  parameters: N/A
  return value: N/A
*/
struct studentType
{
    string firstName;
    string lastName;
    int grade;
    char letterGrade;
};
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main()
{
    string prompt1 = "Enter a first name\n**";
    string prompt2 = "Enter a last name\n**";
    string prompt3 = "Enter a grade\n**";

    studentType s;
    s.firstName = getStudentData(prompt1);
    cout << endl;
    s.lastName = getStudentData(prompt2);
    cout << endl;
    s.grade = getGrade(prompt3);

    while(checkGradeLetter(s.grade) == false)
    {
        if(cin.fail() || s.grade < 0 || s.grade > 4)
        {
            cout << "\nError: Invalid grade\n";
            cin.clear();
            cin.ignore(100, '\n');
            s.grade = getGrade(prompt3);
            checkGradeLetter(s.grade);
        }
    }

    s.letterGrade = getLetterGrade(s.grade);

    display(s.firstName, s.lastName, s.grade, s.letterGrade);

    return 0;
}