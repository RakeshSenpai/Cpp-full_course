#include <iostream>

class Player {
public:
    std::string name;
    int health;

    void attack() {
        std::cout << name << " is attacking!\n";
    }
};