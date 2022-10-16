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
    int matches = 21;      // int
    char g_f = ' ';        // char
    int comp_move = 0;     // int
    int play_move = 0;     // int
    bool play_turn = true; // bool

    std::cout << "The game of Num.  The player to remove the last "
              << "match loses.\n";
    std::cout << "Would you like to go first? (Y/N): ";

    std::cin >> g_f;
    g_f = toupper(g_f);

    do
    {
        while (g_f != 'Y' && g_f != 'N')
        {
            if (g_f != 'Y' && g_f != 'N')
            {
                std::cout << "Please, answer Y or N.\n";
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cin >> g_f;
            g_f = toupper(g_f);
        }

        if (g_f == 'Y')
        {
            std::cout << "Player Turn - Matches: ";

            for (int i = 0; i <= matches; i++)
            {
                if (i == 1)
                {
                    std::cout << d_m;
                }
                else if (i == 2)
                {
                    std::cout << d_m;
                }
                else if (i == 3)
                {
                    std::cout << d_m;
                }
                else if (i == 4)
                {
                    std::cout << d_m;
                }
                else if (i == 5)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 6)
                {
                    std::cout << d_m;
                }
                else if (i == 7)
                {
                    std::cout << d_m;
                }
                else if (i == 8)
                {
                    std::cout << d_m;
                }
                else if (i == 9)
                {
                    std::cout << d_m;
                }
                else if (i == 10)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 11)
                {
                    std::cout << d_m;
                }
                else if (i == 12)
                {
                    std::cout << d_m;
                }
                else if (i == 13)
                {
                    std::cout << d_m;
                }
                else if (i == 14)
                {
                    std::cout << d_m;
                }
                else if (i == 15)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 16)
                {
                    std::cout << d_m;
                }
                else if (i == 17)
                {
                    std::cout << d_m;
                }
                else if (i == 18)
                {
                    std::cout << d_m;
                }
                else if (i == 19)
                {
                    std::cout << d_m;
                }
                else if (i == 20)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 21)
                {
                    std::cout << d_m;
                }
            }
            std::cout << "\nRemove (1 - 3): ";

            while (std::cin.fail() || play_move < 1 || play_move > 3)
            {
                if (std::cin.fail())
                {
                    std::cout << "Please, type 1, 2, or 3 as your "
                              << "response.\n";
                    std::cin.clear();
                    std::cin.ignore(100, '\n');
                }
                else if (play_move < 1)
                {
                    std::cout << "Must remove at least one match.\n";
                    std::cin.clear();
                    std::cin.ignore(100, '\n');
                }
                else if (play_move > 3)
                {
                    std::cout << "Cannot remove more than three "
                              << "matches.";
                    std::cin.clear();
                    std::cin.ignore(100, '\n');
                }
                std::cin >> play_move;
            }

            matches -= play_move;
            std::cout << "Computer Turn - Matches: ";

            for (int i = 0; i <= matches; i++)
            {
                if (i == 1)
                {
                    std::cout << d_m;
                }
                else if (i == 2)
                {
                    std::cout << d_m;
                }
                else if (i == 3)
                {
                    std::cout << d_m;
                }
                else if (i == 4)
                {
                    std::cout << d_m;
                }
                else if (i == 5)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 6)
                {
                    std::cout << d_m;
                }
                else if (i == 7)
                {
                    std::cout << d_m;
                }
                else if (i == 8)
                {
                    std::cout << d_m;
                }
                else if (i == 9)
                {
                    std::cout << d_m;
                }
                else if (i == 10)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 11)
                {
                    std::cout << d_m;
                }
                else if (i == 12)
                {
                    std::cout << d_m;
                }
                else if (i == 13)
                {
                    std::cout << d_m;
                }
                else if (i == 14)
                {
                    std::cout << d_m;
                }
                else if (i == 15)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 16)
                {
                    std::cout << d_m;
                }
                else if (i == 17)
                {
                    std::cout << d_m;
                }
                else if (i == 18)
                {
                    std::cout << d_m;
                }
                else if (i == 19)
                {
                    std::cout << d_m;
                }
                else if (i == 20)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 21)
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
            std::cout << "\nComputer removes " << comp_move << ".\n";
        }
        else
        {
            std::cout << "Computer Turn - Matches: ";

            for (int i = 0; i <= matches; i++)
            {
                if (i == 1)
                {
                    std::cout << d_m;
                }
                else if (i == 2)
                {
                    std::cout << d_m;
                }
                else if (i == 3)
                {
                    std::cout << d_m;
                }
                else if (i == 4)
                {
                    std::cout << d_m;
                }
                else if (i == 5)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 6)
                {
                    std::cout << d_m;
                }
                else if (i == 7)
                {
                    std::cout << d_m;
                }
                else if (i == 8)
                {
                    std::cout << d_m;
                }
                else if (i == 9)
                {
                    std::cout << d_m;
                }
                else if (i == 10)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 11)
                {
                    std::cout << d_m;
                }
                else if (i == 12)
                {
                    std::cout << d_m;
                }
                else if (i == 13)
                {
                    std::cout << d_m;
                }
                else if (i == 14)
                {
                    std::cout << d_m;
                }
                else if (i == 15)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 16)
                {
                    std::cout << d_m;
                }
                else if (i == 17)
                {
                    std::cout << d_m;
                }
                else if (i == 18)
                {
                    std::cout << d_m;
                }
                else if (i == 19)
                {
                    std::cout << d_m;
                }
                else if (i == 20)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 21)
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
            std::cout << "\nComputer removes " << comp_move << ".\n";
            std::cout << "Player Turn - Matches: ";

            for (int i = 0; i <= matches; i++)
            {
                if (i == 1)
                {
                    std::cout << d_m;
                }
                else if (i == 2)
                {
                    std::cout << d_m;
                }
                else if (i == 3)
                {
                    std::cout << d_m;
                }
                else if (i == 4)
                {
                    std::cout << d_m;
                }
                else if (i == 5)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 6)
                {
                    std::cout << d_m;
                }
                else if (i == 7)
                {
                    std::cout << d_m;
                }
                else if (i == 8)
                {
                    std::cout << d_m;
                }
                else if (i == 9)
                {
                    std::cout << d_m;
                }
                else if (i == 10)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 11)
                {
                    std::cout << d_m;
                }
                else if (i == 12)
                {
                    std::cout << d_m;
                }
                else if (i == 13)
                {
                    std::cout << d_m;
                }
                else if (i == 14)
                {
                    std::cout << d_m;
                }
                else if (i == 15)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 16)
                {
                    std::cout << d_m;
                }
                else if (i == 17)
                {
                    std::cout << d_m;
                }
                else if (i == 18)
                {
                    std::cout << d_m;
                }
                else if (i == 19)
                {
                    std::cout << d_m;
                }
                else if (i == 20)
                {
                    std::cout << d_m << " ";
                }
                else if (i == 21)
                {
                    std::cout << d_m;
                }
            }

                std::cout << "\nRemove (1 - 3): ";
                std::cin >> play_move;

            while (std::cin.fail() || play_move < 1 || play_move > 3)
            {
                if (std::cin.fail())
                {
                    std::cout << "Please, type 1, 2, or 3 as your "
                              << "response.\n";
                    std::cin.clear();
                    std::cin.ignore(100, '\n');
                }
                else if (play_move < 1)
                {
                    std::cout << "Must remove at least one match.\n";
                    std::cin.clear();
                    std::cin.ignore(100, '\n');
                }
                else if (play_move > 3)
                {
                    std::cout << "Cannot remove more than three "
                              << "matches.";
                    std::cin.clear();
                    std::cin.ignore(100, '\n');
                }
                std::cin >> play_move;
            }
                matches -= play_move;

        }
    } while (matches > 0);

    return 0;
}