/*
    Name: Henok Tilahun, 5007740928, 1021, Lab 2A
    Description: Once run, program will read inputs as degrees and calculate the 
    radians and trig calculations
    Input: Degrees
    Output: Radians, sin calculations, cos calculations, tan calculations
*/
#include <iostream>
#include <cmath>
#include <iomanip>
/*
    Function_Identifier: Called by OS when program is run
    parameters: N/A
    return_value: 0

*/
int main ()
{   
    //Initalize Constant
    const double PI = 3.141592;

    //Initalize variable
    double degree = 0.0;

    //prompt user for angles and read the input
    std::cout << "Enter an angle value, in degrees\n" << "**";
    std::cin >> degree;
    std::cout << std::endl;

    //Convert from angles to radiens
    double radian = degree * (PI/180);

    //Get sin, cos, tan
    double sin_calc = sin(radian);
    double cos_calc = cos(radian);
    double tan_calc = tan(radian);

    //Display the answer
    std::cout << degree << " degrees = " << radian << " radians\n";
    std::cout << "sin(" << degree << ") = " << sin_calc << std::endl;
    std::cout << "cos(" << degree << ") = " << cos_calc << std::endl;
    std::cout << "tan(" << degree << ") = " << tan_calc << std::endl;

    return 0;
}