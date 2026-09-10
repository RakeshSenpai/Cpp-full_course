#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;

    // a = pow(a, 2);
    // b = pow(b, 2);
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Side C :" << c;

    double x = 5.7;

std::cout << ceil(a);   // 6
std::cout << floor(a);  // 5
std::cout << round(a);  // 6
std::cout << trunc(a);  // 5

    return 0;
}