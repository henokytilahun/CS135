/*
  Name: Henok Tilahun, 5007740928, 1021, Lab 5A
  Description: Takes user input then prints out a character
  in increaseing then decreasing order while the user input
  is between 2 and 20. This code utilizes functions.
  Input: number between 2 and 20, character
  Output: character of user's choicee aranged in half-hourglass shape
*/
#include <iostream>

using namespace std;

//declaring functions
int getIntegerInput(string prompt, int min, int max);
char getCharacterInput(string prompt);
void writeUpsideDownTriangle(int size, char character);
void writeRightsideUpTriangle(int size, char character);
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main()
{
	// Minimums/maximums
	const int MIN = 2;
	const int MAX = 20;
	// Prompt for integer input
	string prompt1 = "Enter a count between " +
					 to_string(MIN) + " and " +
					 to_string(MAX) + "\n**";
	// Prompt for character input
	string prompt2 = "\nEnter a character\n**";

	// Get size of triangle

	int size = getIntegerInput(prompt1, MIN, MAX);

	// Get character to use when printing triangle

	char character = getCharacterInput(prompt2);

	// Write both triangles
	cout << '\n';
	writeUpsideDownTriangle(size, character);
	writeRightsideUpTriangle(size, character);
	cout << endl;

	// Terminate the program
	return 0;
}

// Function definitions
/*
  FUNCTION_IDENTIFIER: Calculates # of times char prints.
  parameters: strings and ints
  return value: returns int
*/
int getIntegerInput(string prompt, int min, int max)
{
	
	int num = 5;
	do
	{
		if (cin.fail() || num >= max || num <= min)
		{
			cout << "\nError: Invalid input!\n";
			cin.clear();
			cin.ignore(100, '\n');
		}
		cout << prompt;
		cin >> num;
	} while (cin.fail() || num > max || num < min);
	
	return num;
}
/*
  FUNCTION_IDENTIFIER: Get's user input character.
  parameters: string
  return value: returns char
*/
char getCharacterInput(string prompt) //gets user's perfered characters
{
	char character = 'a';
	cout << prompt;
	cin >> character;
	return character;
}
/*
  FUNCTION_IDENTIFIER: Prints first half of triangle.
  parameters: int and char
  return value: N/A
*/
void writeUpsideDownTriangle(int size, char character) //displays char
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			cout << character;
		}
		cout << "\n";
	}
} //ends
/*
  FUNCTION_IDENTIFIER: Prints second half of triangle.
  parameters: int and char
  return value: N/A
*/
void writeRightsideUpTriangle(int size, char character)//displays char
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << character;
		}
		if(!(i == size - 1))
		{
			cout << "\n";
		}
	}
}//ends