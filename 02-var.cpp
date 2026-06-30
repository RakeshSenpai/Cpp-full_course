#include <iostream>

int main(){
    //const (it cannot be change)
    const double PI = 3.1415;
    double radius = 8;
    double circumference = 2* PI * radius;
    std::cout << circumference << "cm" ;

    const int HEIGHT = 280;
    const int WIDTH = 350;
    return 0;
}
