#include <fstream>
#include <iostream>
#include <sstream>

int main()
{
    std::string filename = " ";
    std::ifstream reader;
    std::string names[50];
    int index = 0;
    double scores[50];
    std::string lettergrades[50];
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

    std::string highStudent = "", lowStudent = "";
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

            names[index] = name;
            scores[index] = stod(scoreStr);
            lettergrades[index] = letterGrade;
            index++;

            scoreTotal += stod(scoreStr);
            if(stod(scoreStr) > highScore)
            {
                highScore = stod(scoreStr);
                highStudent = name;
            }
            if(stod(scoreStr) < lowScore)
            {
                lowScore = stod(scoreStr);
                lowStudent = name;
            }
            /*
                double score = s
            */
            std::cout << "Name: " << name << "\tScore: " << scoreStr << "\tLetter Grade: " << letterGrade << std::endl;

            studentCount++;
        }
        std::cout << "Number of students: " << studentCount << "\tClass Average:" << scoreTotal/studentCount << "\n Highest score = " << highScore << "\tStudent: " << highStudent << "\tLowest Score: " << lowScore << "\tStudent: "<< lowStudent << std::endl;

        first_line = false;
    }

    reader.close();

    std::cout<< "Data from the array:\n";

    for(int i = 0; i < 50; i++)
    {
        if(scores[i] > scoreTotal/studentCount)
        {
            std::cout <<"Name: " << names[i] << "\tScores:" << scores[i] << "\tLetter Grades: " << lettergrades[i] <<std::endl;
        }
        //std::cout <<"Name: " << names[i] << "\tScores:" << scores[i] << "\tLetter Grades: " << lettergrades[i] <<std::endl;
    }
    return 0;
}