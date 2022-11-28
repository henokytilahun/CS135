/*
  Name: Henok Tilahun, 5007740928, 1021, 10A
  Description:  funcGets input from user using user-definedtions.
  Check for failure using user defined funcitions. Displays a
  data sheet using a struct named studentType.
  Input: Ints, strings, chars, and structs
  Output: chars, bools, ints, and void
*/
#include <iostream>
#include <iomanip>
using namespace std;
/*
  FUNCTION_IDENTIFIER: Struct for student.
  parameters: N/A
  return value: N/A
*/
struct studentType
{
  string first;
  string last;
  int grade;
  char letterGrade;
};
/*
  FUNCTION_IDENTIFIER: displays final data.
  parameters: struct
  return value: N/A
*/
void display(studentType s)
{
  cout << "\nData Entered"
       << "\n"
       << "  ";
  cout << "student.firstName" << std::setw(5) << "= " << s.first
       << "\n"
       << "  ";
  cout << "student.lastName" << std::setw(6) << "= " << s.last
       << "\n"
       << "  ";
  cout << "student.grade" << std::setw(9) << "= " << s.grade
       << "\n"
       << "  ";
  cout << "student.letterGrade" << std::setw(3) << "= "
       << s.letterGrade << "\n";
}
/*
  FUNCTION_IDENTIFIER: sets student struct w/ ref param.
  parameters: struct, string, int, and char
  return value: N/A
*/
void getStudentData(studentType &student, string f, string l, int g, char lg)
{
  student.first = f;
  student.last = l;
  student.grade = g;
  student.letterGrade = lg;
}
/*
  FUNCTION_IDENTIFIER: gets char letter.
  parameters: int
  return value: char
*/
char getGrade(int input)
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
  FUNCTION_IDENTIFIER: change student ref param.
  parameters: struct, string
  return value: char
*/
char getLetterGrade(studentType &student, string prompt)
{
  cout << "\n" << prompt;
  cin >> student.grade;
  while (cin.fail() || student.grade < 0 || student.grade > 4)
  {
    if (cin.fail() || student.grade < 0 || student.grade > 4)
    {
      cout << "\nError: Invalid grade\n" << prompt;
      cin.clear();
      cin.ignore(100, '\n');
      cin >> student.grade;
    }
  }
  return getGrade(student.grade);
}
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
  string input1 = "";
  string input2 = "";
  studentType s;

  cout << prompt1;
  cin >> s.first;

  cout << "\n"
       << prompt2;
  cin >> s.last;

  s.letterGrade = getLetterGrade(s, prompt3);

  getStudentData(s, s.first, s.last, s.grade, s.letterGrade);

  display(s);
  return 0;
}