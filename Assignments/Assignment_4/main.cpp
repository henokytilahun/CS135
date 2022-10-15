#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    // initalize global variables

    // std::string d_m = "|";
    // int matches = 21;

    char g_f = ' ';

    std::cout << "The game of Num.  The player to remove the last match loses.\n";
    std::cout << "Would you like to go first? (Y/N): ";

    std::cin >> g_f;
    g_f = toupper(g_f);





/*
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


*/













    /*
        for(int i = 0; i <= matches; i++)
        {
            if(i == 1)
            {
                std::cout << d_m;
            } else if (i == 2)
            {
                std::cout << d_m;
            } else if (i == 3)
            {
                std::cout << d_m;
            } else if (i == 4)
            {
                std::cout << d_m;
            } else if (i == 5)
            {
                std::cout << d_m << " ";
            } else if (i == 6)
            {
                std::cout << d_m;
            } else if (i == 7)
            {
                std::cout << d_m;
            } else if (i == 8)
            {
                std::cout << d_m;
            } else if (i == 9)
            {
                std::cout << d_m;
            } else if (i == 10)
            {
                std::cout << d_m << " ";
            } else if (i == 11)
            {
                std::cout << d_m;
            } else if (i == 12)
            {
                std::cout << d_m;
            } else if (i == 13)
            {
                std::cout << d_m;
            } else if (i == 14)
            {
                std::cout << d_m;
            } else if (i == 15)
            {
                std::cout << d_m << " ";
            } else if (i == 16)
            {
                std::cout << d_m;
            } else if (i == 17)
            {
                std::cout << d_m;
            } else if (i == 18)
            {
                std::cout << d_m;
            } else if (i == 19)
            {
                std::cout << d_m;
            } else if (i == 20)
            {
                std::cout << d_m << " ";
            } else if (i == 21)
            {
                std::cout << d_m;
            }
        }



    */
    return 0;
}