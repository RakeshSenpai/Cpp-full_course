#include <iostream>

// Namespace for conflicts of same names

namespace first{
    int x = 5;
}

namespace second{
    std::string x = "Having funn";
}


int main() {
    const int x = 2;

    std::cout << first::x;

    return 0;
}