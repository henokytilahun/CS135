#include <fstream>
#include <iostream>
#include <sstream>

int main()
{
    std::string filename = " ";
    std::ifstream reader;

    do
    {
        std::cout << "Enter a filename\n";
        std::getline(std::cin, filename);
        reader.open(filename.c_str());
        if (!reader)
        {
            std::cout << "Error openning file\n";
            reader.close();
        }
    } while (!reader);

    std::string line = "";
    bool first_line = true;
    /*getline(reader, line); */ //reads first line to ignore it for later calculatiuns

    int studentCount = 0;
    double scoreTotal = 0;
    double highScore = -1;
    double lowScore = 101;
    while(!reader.eof())
    {
        getline(reader, line);
        if(!first_line)
        {
            std::stringstream ss(line);
            std::string name;
            std::string scoreStr;
            std::string letterGrade;
            std::getline(ss, name, ',');
            std::getline(ss, scoreStr, ',');
            std::getline(ss, letterGrade, ',');
            scoreTotal += stod(scoreStr);
            if(stod(scoreStr) > highScore)
            {
                highScore = stod(scoreStr);
            }
            if(stod(scoreStr) < lowScore)
            {
                lowScore = stod(scoreStr);
            }
            /*
                double score = s
            */
            std::cout << "Name: " << name << "\tScore: " << scoreStr << "\tLetter Grade: " << letterGrade << std::endl;

            studentCount++;
        }
        std::cout << "Number of students: " << studentCount << "\tClass Average:" << scoreTotal/studentCount << "\n Highest score = " << highScore << "\tLowest Score: " << lowScore << std::endl;

        first_line = false;
    }

    reader.close();
    return 0;
}