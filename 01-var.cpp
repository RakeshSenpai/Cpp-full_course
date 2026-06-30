#include <iostream>

int main(){
    int x;//declaration
    x = 5;//assignment
    // int x = 5;

    int y = 4;
    int sum = x + y;
    // int deci = 7.5;
    
    // std::cout << x << '\n';
    // std::cout << y << '\n';
    // std::cout << sum << '\n';
    // std::cout << deci << '\n';

    //Double (number including decimals)
    
    double gpa = 6.5;

    // std::cout << gpa;

    // char - single character

    char grade = 'A';
    char dollarSign = '$';
   // int add = gpa + y + grade;
    // std::cout << add;

    //Boleans
    bool student = true;
    bool forSale = false;

    //strings (Objects that represents a sequence of text)

    std::string name = "Rakesh";
    std::string day = "Wednessday";
    std::string greetings = "Hello ";
    // std::string age = "22";
    int age1 = 22;

     std::cout << "Sup " << name << '\n';
     std::cout << "you're " << age1 << "years old" << ". and it's " << day << '\n';
    // std::cout << greetings << name;



    return 0;
}