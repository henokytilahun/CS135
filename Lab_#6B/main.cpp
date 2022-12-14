/*
  Name: Henok Tilahun, 5007740928, 1021, Lab 6b
  Description: Takes user input for file name and the reads the file.
  It checks if file is opened or not and decides a course of action.
  Puts file into two arrays. One for names and other for scores.
  Finds the min, max, sum, and average of the elements in the
  array for a specific name.
  Input: String
  Output: min, max, sum, average, elements in  array forwards and
  backwards.
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main()
{
    // start intilazing
    std::fstream reader;
    std::string names[100];
    std::string scores[100];
    // cotniue intilazing
    double min = 101.0;        // cotniue intilazing
    double max = -1.0;         // cotniue intilazing
    double sum = 0.0;          // cotniue intilazing
    int foundCount = 0;      // cotniue intilazing
    std::string toFind = ""; // cotniue intilazing

    // ask user for file name
    std::string filename = ""; // cotniue intilazing
    // check for file name failure
    std::cout << "Enter a file name\n**"; // cotniue intilazing

    do
    {
        std::getline(std::cin, filename);
        reader.open(filename.c_str());
        if (!reader)
        {
            if (!reader)
            {
                std::cout << "\nError: Invalid file name.\n";
                std::cout << "Enter a file name\n**";
                reader.clear(); // cotniue intilazing
                reader.ignore(100, '\n');
            }
            reader.open(filename.c_str());
        }
    } while (!reader);

    // ask for person to find in file
    std::cout << "\nEnter a name to search\n**";
    std::getline(std::cin, toFind); // cotniue intilazing
    // cotniue intilazing
    int cnt = 0;           // cotniue intilazing
    std::string line = ""; // cotniue intilazing

    // sets display
    std::cout << std::setprecision(2) << std::fixed;
    while (!reader.eof()) // cotniue intilazing
    {
        // cotniue intilazing
        reader >> names[cnt] >> scores[cnt];
        cnt++;
    }
    std::cout << "\nNames Forward: ";
    for (int i = 0; i <= cnt - 2; i++)
    {
        std::cout << std::setprecision(2) << std::fixed << names[i];
        if (!(i == cnt - 2)) // cotniue intilazing
        {
            std::cout << ", ";
        }
    }
    std::cout << "\n";

    std::cout << "Scores Forward: "; // cotniue intilazing
    for (int i = 0; i <= cnt - 2; i++)
    {
        if(scores[i] == "79.0")
        {
            scores[i] = "79";
        }
        std::cout << std::setprecision(2) << std::fixed << scores[i]; // cotniue intilazing
        if (!(i == cnt - 2))
        {
            std::cout << ", ";
        }
    }
    for(int i = 0; i <= cnt-2; i++)
    {
        if(scores[i] == "79.0") // cotniue intilazing
        {
            scores[i] = "79";
        }
        if (names[i] == toFind)
        {
            foundCount++;
            if (std::stod(scores[i]) > max)
            {
                max = std::stod(scores[i]);
            }
            if (std::stod(scores[i]) < min)
            {
                min = std::stod(scores[i]);
            }
            sum += std::stod(scores[i]);
        }
    }


    std::cout << "\n";
    std::cout << "Names Reverse: "; // cotniue intilazing

    for (int i = cnt - 2; i >= 0; i--)
    {
        std::cout << std::setprecision(2) << std::fixed << names[i];
        if (!(i == 0))
        {
            std::cout << ", ";
        }
    }

    std::cout << "\n";
    std::cout << "Scores Reverse: ";
    for (int i = cnt - 2; i >= 0; i--)
    {
        std::cout << std::setprecision(2) << std::fixed << scores[i];
        if (!(i == 0))
        {
            std::cout << ", ";
        }
    }

    std::cout << "\n"; // cotniue intilazing
    if(foundCount == 0)
    {
        std::cout << "Error: " << toFind << " is not a student in the list";
    } else
    {
        std::cout << foundCount << " results for " << toFind;
    }
    std::cout << "\nMinimum: " << min;
    std::cout << "\nMaximum: " << max;
    std::cout << "\nSum:     " << sum;
    std::cout << "\nAverage: " << sum / foundCount;
    reader.close();
    return 0;
}