#include <iostream>

int main(){
    // out << insertion operator
    //cin >> extractor operator

    std::string name;
    int age ;

    std::cout << "What's your Age?: ";
    std::cin >> age;

    std::cout << "What's your name?: ";
    std::getline(std::cin >>std::ws, name);


    std::cout << "Hello " << name << '\n';
    std::cout << "Your age is " << age;



    return 0; 
    
};