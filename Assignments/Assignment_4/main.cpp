/*
  Name: Henok Tilahun, 5007740928, 1021, Assignment 4
  Description: A game of Nim where there are 21 matches in the beginning
  and the player and computer fight to see who can come out on top.
  It is a game where loops and nested loops basically create the whole
  experience. Based on the number chosen by the user, the matches
  displayed will disappear. Also, it checks for input failure and
  numbers that go above or below what is suggested.
  Input: char, int
  Output: A game of nim
*/
#include <iostream>
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main()
{

    // initalize global variables
    std::string d_m = "|"; // string
    char g_f = ' ';        // char
    int comp_move = 0;     // int
    int play_move = 0;     // int
    bool play_turn = true; // bool
    char play_again = ' ';

    std::cout << "The game of Num.  The player to remove the last "
              << "match loses.\n\n";
    std::cout << "Would you like to go first? (Y/N): ";

    std::cin >> g_f;
    g_f = toupper(g_f);

    do
    {
        int matches = 21; //int   
        do // do while loop
        {
            while (g_f != 'Y' && g_f != 'N') // while loop
            {
                if (g_f != 'Y' && g_f != 'N') // if statement
                {
                    std::cout << "Please, answer Y or N.\n";
                    std::cout << "\nWould you like to go first? "
                    << "(Y/N):";
                    std::cin.clear();
                    std::cin.ignore(100, '\n');
                }
                std::cin >> g_f;
                g_f = toupper(g_f);
            }

            if (g_f == 'Y') // if statement
            {
                std::cout << "\nPlayer Turn - Matches: "; // displays to screen

                for (int i = 1; i <= matches + 1; i++) // for loop
                {
                    if (i == 1) // begining of painful if statemetns
                    {
                        std::cout << d_m;
                    }
                    else if (i == 2) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 3) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 4) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 5) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 6) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 7) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 8) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 9) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 10) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 11) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 12) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 13) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 14) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 15) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 16) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 17) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 18) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 19) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 20) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 21) // else if
                    {
                        std::cout << d_m;
                    }
                }

                if (matches < 1) // if statement
                {
                    std::cout << "\nGame Over - Computer wins.";
                }
                else // else
                {
                    std::cout << "\n\nRemove (1 - 3): ";
                    std::cin >> play_move;
                }

                while (std::cin.fail() || play_move < 1 || play_move > 3) // while loop
                {
                    if (std::cin.fail()) // if statement
                    {
                        std::cout << "Please, type 1, 2, or 3 as your "
                                  << "response.\n";
                        std::cin.clear();
                        std::cin.ignore(100, '\n');
                    }
                    else if (play_move < 1) // else if
                    {
                        std::cout << "Must remove at least one match.\n";
                        std::cin.clear();
                        std::cin.ignore(100, '\n');
                    }
                    else if (play_move > 3) // else if
                    {
                        std::cout << "Cannot remove more than three "
                                  << "matches.";
                        std::cin.clear();
                        std::cin.ignore(100, '\n');
                    } // else if
                    std::cin >> play_move;
                }
                matches -= play_move; // player taking away from matches

                std::cout << "Computer Turn - Matches: ";

                for (int i = 1; i <= matches + 1; i++) // for loop
                {
                    if (i == 1) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 2) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 3) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 4) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 5) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 6) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 7) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 8) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 9) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 10) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 11) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 12) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 13) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 14) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 15) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 16) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 17) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 18) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 19) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 20) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 21) // else if
                    {
                        std::cout << d_m;
                    }
                }
                comp_move = matches % 4;
                if (comp_move == 0)
                {
                    comp_move = 3;
                }

                matches -= comp_move;
                std::cout << "\n\nComputer removes " << comp_move << ".\n";
            }
            else
            {
                std::cout << "Computer Turn - Matches: ";

                for (int i = 1; i <= matches + 1; i++)
                {
                    if (i == 1) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 2) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 3) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 4) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 5) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 6) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 7) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 8) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 9) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 10) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 11) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 12) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 13) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 14) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 15) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 16) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 17) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 18) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 19) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 20) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 21) // else if
                    {
                        std::cout << d_m;
                    }
                }
                comp_move = matches % 4;
                if (comp_move == 0)
                {
                    comp_move = 3;
                }

                matches -= comp_move;
                std::cout << "\n\nComputer removes " << comp_move << ".\n";
                std::cout << "\nPlayer Turn - Matches: ";

                for (int i = 1; i <= matches + 1; i++)
                {
                    if (i == 1) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 2) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 3) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 4) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 5)
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 6) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 7) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 8) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 9) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 10) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 11) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 12) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 13) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 14) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 15) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 16) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 17) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 18) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 19) // else if
                    {
                        std::cout << d_m;
                    }
                    else if (i == 20) // else if
                    {
                        std::cout << d_m << " ";
                    }
                    else if (i == 21) // else if
                    {
                        std::cout << d_m;
                    }
                }
                if (matches < 1) // if statement
                {
                    std::cout << "\nGame Over - Computer wins.";
                }
                else // else
                {
                    std::cout << "\nRemove (1 - 3): ";
                    std::cin >> play_move;
                }

                while (std::cin.fail() || play_move < 1 || play_move > 3) // while loop
                {
                    if (std::cin.fail()) // if statement
                    {
                        std::cout << "Please, type 1, 2, or 3 as your "
                                  << "response.\n";
                        std::cin.clear();
                        std::cin.ignore(100, '\n');
                    }
                    else if (play_move < 1) // else
                    {
                        std::cout << "Must remove at least one match.\n";
                        std::cin.clear();
                        std::cin.ignore(100, '\n');
                    }
                    else if (play_move > 3) // else
                    {
                        std::cout << "Cannot remove more than three "
                                  << "matches.";
                        std::cin.clear();
                        std::cin.ignore(100, '\n');
                    }
                    std::cin >> play_move; // taking input
                }

                matches -= play_move; // player taking away from matches count
            }
        } while (matches > 0); // end of while loop

        std::cout << "Would you like to play again? (Y/N): ";
        play_again = ' ';
        while (play_again != 'Y' && play_again != 'N') // while loop
        {
            if (play_again != 'Y' && play_again != 'N') // if statement
            {
                std::cout << "Please, answer Y or N.\n";
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cin >> play_again;
            play_again = toupper(play_again);
        }

    } while (play_again == 'Y');
    return 0;
}