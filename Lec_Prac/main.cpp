#include <fstream>

int main ()
{
    //1.create an ofstream object
    std::ofstream writer;
    //2.open or create a file
    writer.open("out.txt", std::fstream::app);
    //3.write to the file
    writer << "Hello World\n";
    //4.close the file
    writer.close();

    return 0;
}