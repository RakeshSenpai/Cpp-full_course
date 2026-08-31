#include <iostream>
#include <cmath>

int main(){

    double x = 3.15;
    double y = 4;
    double z;

    //Maax funciton
    z = pow(2, 3);
    //  z = std::max(x, y);
    // z = std::min(x,y);
    //    z = std::pow(2,5);
    // z = std::sqrt(81);
    // z = std::abs(-10);
    // z = std::round(x);
    // z = std::ceil(x); 
    z = std::floor(x);
    std::cout << z;

    return 0;
}