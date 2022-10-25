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
    double scores[100];
    // cotniue intilazing
    double min = 101.0;        // cotniue intilazing
    double max = -1.0;         // cotniue intilazing
    double sum = 0.0;          // cotniue intilazing
    int foundCount = 0;      // cotniue intilazing
    std::string toFind = ""; // cotniue intilazing

    // ask user for file name
    std::string filename = ""; // cotniue intilazing

    // check for file name failure
    do
    {
        std::cout << "Enter a file name\n**";
        std::getline(std::cin, filename);
        reader.open(filename.c_str());
        if (!reader)
        {
            if (!reader)
            {
                std::cout << "\nError: Invalid file name.\n";
                std::cout << "Enter a file name\n**";
                reader.clear();
                reader.ignore(100, '\n');
            }
            reader.open(filename.c_str());
        }
    } while (!reader);

    // ask for person to find in file
    std::cout << "\nEnter a name to search\n**";
    std::getline(std::cin, toFind);
    // cotniue intilazing
    int cnt = 0;           // cotniue intilazing
    std::string line = ""; // cotniue intilazing

    // sets display
    std::cout << std::setprecision(2) << std::fixed;
    while (!reader.eof())
    {
        // cotniue intilazing
        reader >> names[cnt] >> scores[cnt];
        cnt++;
    }
    std::cout << "\nNames Forward: ";
    for (int i = 0; i <= cnt - 2; i++)
    {
        std::cout << names[i];
        if (!(i == cnt - 2))
        {
            std::cout << ", ";
        }
    }
    std::cout << "\n";

    std::cout << "Scores Forward: ";
    for (int i = 0; i <= cnt - 2; i++)
    {
        std::cout << scores[i];
        if (!(i == cnt - 2))
        {
            std::cout << ", ";
        }
    }
    for(int i = 0; i <= cnt-2; i++)
    {
        if (names[i] == toFind)
        {
            int temp = scores[i];
            foundCount++;
            if (temp > max)
            {
                max = temp;
            }
            if (temp < min)
            {
                min = temp;
            }
            sum += temp;
        }
    }
    std::cout << "\n";
    std::cout << "Names Reverse: ";

    for (int i = cnt - 2; i >= 0; i--)
    {
        std::cout << names[i];
        if (!(i == 0))
        {
            std::cout << ", ";
        }
    }

    std::cout << "\n";
    std::cout << "Scores Reverse: ";
    for (int i = cnt - 2; i >= 0; i--)
    {
        std::cout << scores[i];
        if (!(i == 0))
        {
            std::cout << ", ";
        }
    }

    std::cout << "\n";
    std::cout << foundCount << " results for " << toFind;
    std::cout << "\nMinimum: " << min;
    std::cout << "\nMaximum: " << max;
    std::cout << "\nSum:     " << sum;
    std::cout << "\nAverage: " << sum / foundCount;
    reader.close();
    return 0;
}