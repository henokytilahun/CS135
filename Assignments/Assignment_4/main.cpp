#include <iostream>

int main()
{
    char play_again = ' ';
    char g_f = ' ';
    bool current_player = 0;
    int matches = 21;
    int p_choice = 2;

    do
    {
        std::cout << "The game of Num.  The player to remove the "
                  << "last match loses.\n"
                  << "\nWould you like to go first? (Y/N): ";
        std::cin >> g_f;
        g_f = toupper(g_f);

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

        if (g_f == 'Y' || g_f == 'y')
        {
            std::cout << "Player Turn - Matches: ";
            do
            {
                for (int i = 1; i <= matches; i++)
                {
                    if (i <= 5)
                    {
                        if (i < 5)
                        {
                            std::cout << "|";
                        }
                        else if (i == 5)
                        {
                            std::cout << "| ";
                        }
                    }
                    else if (i <= 10)
                    {
                        if (i < 10)
                        {
                            std::cout << "|";
                        }
                        else if (i == 10)
                        {
                            std::cout << "| ";
                        }
                    }
                    else if (i <= 15)
                    {
                        if (i < 15)
                        {
                            std::cout << "|";
                        }
                        else if (i == 15)
                        {
                            std::cout << "| ";
                        }
                    }
                    else if (i <= 20)
                    {
                        if (i < 20)
                        {
                            std::cout << "|";
                        }
                        else if (i == 20)
                        {
                            std::cout << "| ";
                        }
                    }
                    else
                    {
                        std::cout << "|\n";
                    }
                }

                std::cout << "\nRemove (1 - 3)";
                do
                {
                    if (std::cin.fail())
                    {
                        std::cout << "Please, type 1, 2, or 3 as "
                        <<"your response.\n";
                        std::cin.clear();
                        std::cin.ignore(100, '\n');
                    } else if (p_choice < 1)
                    {
                        std::cout << "Must remove at least one match.";
                        std::cin.clear();
                        std::cin.ignore(100, '\n');
                    } else
                    {
                        std::cout << "Cannot remove more than three "
                        <<"matches.\n";
                        std::cin.clear();
                        std::cin.ignore(100, '\n');
                    }
                } while(std::cin.fail() || p_choice < 1 || p_choice > 3);

                matches = matches - 10;

            } while (matches != 0);
        }
        else
        {
            do
            {
                /* code */
            } while (matches != 0);
        }

    } while (play_again = 'Y' || 'y');

    return 0;
}