/*
  Name: Henok Tilahun, 5007740928, 1021, Lab 6b
  Description: Takes user input for file name and the reads the file.
  It checks if file is opened or not and decides a course of action.
  Puts file into 5 different arrays. It creates a database of each value.
  Checks to see if cars speed went above certian limits based on
  weight and speed.
  Input: String
  Output: Creates files
*/
#include <iostream>
#include <fstream>
#include <sstream>
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/
int main()
{
    // initalize variabkles and arrays
    std::string plate[1200];    // array
    std::string date[1200];     // array
    std::string time[1200];     // array
    std::string weight[1200];   // array
    std::string speed[1200];    // array
    std::string file_name = ""; // initalizes string
    std::ifstream reader;       // creates input
    std::ofstream writer;       // creates output
    int vio = 0;

    std::cout << "Open File: "; // asks user for file name
    do                          // checks if valid file exists
    {
        getline(std::cin, file_name);
        reader.open(file_name.c_str());
        if (!reader)
        {
            if (!reader)
            {
                std::cout << "Could not open " << file_name;
                std::cout << "\nOpen File: ";
                reader.clear();
                reader.ignore(100, '\n');
            }
            reader.open(file_name.c_str());
        }
    } while (!reader);

    int index = 0; // increimenter for reading file
    std::string line = "";
    while (!reader.eof()) // executes as long as file has not ended
    {
        getline(reader, line);
        std::stringstream ss(line);
        getline(ss, plate[index], ',');
        getline(ss, date[index], ',');
        getline(ss, time[index], ',');
        getline(ss, weight[index], ',');
        getline(ss, speed[index], ',');
        index++;
    }
    reader.close();

    for (int i = 0; i < index; i++) // starts for loop
    {
        if (std::stoi(weight[i]) < 5000 && std::stoi(speed[i]) > 45)
        {
            writer << "[" << time[i] << "] " << plate[i] << "\n";
            vio++;
        }
        else if (std::stoi(weight[i]) > 5000 && std::stoi(speed[i]) > 30)
        {
            writer << "[" << time[i] << "] " << plate[i] << "\n";
            vio++;
        }
    }

    std::string report = date[0]; // sets report to the date of 1st index
    int repDate = 0;              // gonna contain index for date value

    while (report == date[repDate]) // runs as long as indx matches
    {
        writer.open("[" + report + "]" + " Report.txt");
        for (int i = 0; i < index; i++) // starts for loop
        {
            if (date[i] == "10-09-2022")
            {
                if (std::stoi(weight[i]) < 5000 && std::stoi(speed[i]) > 45)
                {
                    writer << "[" << time[i] << "] " << plate[i] << "\n";
                }
                else if (std::stoi(weight[i]) > 5000 && std::stoi(speed[i]) > 30)
                {
                    writer << "[" << time[i] << "] " << plate[i] << "\n";
                }
            }
        }
        repDate++; // updates index
    }

    if (!(report == date[repDate]) && (repDate != index))
    {
        writer.close();
        report = date[repDate];
        while (report == date[repDate]) // runs as long as indx matches
        {
            writer.open("[" + report + "]" + " Report.txt");
            for (int i = repDate; i < index; i++) // starts for loop
            {
                if (date[i] == "10-10-2022")
                {
                    if (std::stoi(weight[i]) < 5000 && std::stoi(speed[i]) > 45)
                    {
                        writer << "[" << time[i] << "] " << plate[i] << "\n";
                    }
                    else if (std::stoi(weight[i]) > 5000 && std::stoi(speed[i]) > 30)
                    {
                        writer << "[" << time[i] << "] " << plate[i] << "\n";
                    }
                }
            }
            repDate++; // updates index
        }
    }

    if (!(report == date[repDate]) && (repDate != index))
    {
        writer.close();
        report = date[repDate];
        while (report == date[repDate]) // runs as long as indx matches
        {
            writer.open("[" + report + "]" + " Report.txt");
            for (int i = repDate; i < index; i++) // starts for loop
            {
                if (date[i] == "10-11-2022")
                {
                    if (std::stoi(weight[i]) < 5000 && std::stoi(speed[i]) > 45)
                    {
                        writer << "[" << time[i] << "] " << plate[i] << "\n";
                    }
                    else if (std::stoi(weight[i]) > 5000 && std::stoi(speed[i]) > 30)
                    {
                        writer << "[" << time[i] << "] " << plate[i] << "\n";
                    }
                }
            }
            repDate++; // updates index
        }
    }

    std::cout << vio << " violations logged.\n";
    writer.close();
    return 0;
}