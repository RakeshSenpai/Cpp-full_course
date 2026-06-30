#include <iostream>

// Namespace for conflicts of same names

namespace first{
    int x = 5;
}

namespace second{
    std::string x = "Having funn";
}


int main() {
    //using namespace second; // using namespace std..
    using namespace std;
    //using this line we can remove the std from variables like in the down bellow
    // using std::cout;
    // using std::string;
    // it's a safer alternative to using namespace standard..
    // const int x = 4;

    string x = "Hey";

    cout << first::x;
    // std::cout << first::x;
    // std::cout << x;

    return 0;
}