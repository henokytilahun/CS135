#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //uncomment to make it so the number isn't the same every time
    //srand(time(nullptr)); 
    int secret = (rand() % 100) + 1;
    int guess = 0;
    bool isPlayersTurn = true; //player goes first
    cout << "Random number between 1 & 100 generated!" << endl;
    do
    {
        // get the guess from whoevers turn it is
        if (isPlayersTurn)
        {
            cout << "Guess number: ";
            cin >> guess;
        }
        else
        { // computers turn
            guess = (rand() % 100) + 1;
        }

        //we use the same variable for both the player guess and the computer guess so we don't have to reuse checking code
        // check guess to see if they are right
        if (guess != secret)
            cout << ((isPlayersTurn) ? "Player guess " : "Computer Guess ") << guess << " is incorrect, try again." << endl;
        else
        {
            //The ternary operator is used here to save us from a long and redundant nested if statement
            //the part before the question mark is checked, if it is true the part before the colon is used
            //if false the part after is used
            //ternary operators have been on exams in the past
            cout << ((isPlayersTurn) ? "Player guess " : "Computer Guess ") << guess << " is correct!" << endl;
            break; //end the game
        }
        cout << endl;

        // change whos turn it is
        isPlayersTurn = !isPlayersTurn;
    } while (true);

    return 0;
}