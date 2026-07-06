#include <iostream>

int main(){
    // out << insertion operator
    //cin >> extractor operator

    std::string name;
    int age ;
    std::cout << "What's your name?: ";
    std::cin >> name;

    std::cout << "What's your Age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "Your age is " << age;



    return 0; 
    
};