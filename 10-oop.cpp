#include <iostream>

class Player {
public:
    std::string name;
    int health;

    void attack() {
        std::cout << name << "Heyy\n";
    }
};

int main() {

    Player player1;

    player1.name = "Whatsupp";
    player1.health = 100;

    player1.attack();

    return 0;
}