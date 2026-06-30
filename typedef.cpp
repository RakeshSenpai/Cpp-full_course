#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text_t;
// typedef int number_t;

//recomended 'using' keyword..typedef replaced by 'using'

using text_t = std::string;
using number_t = int;

int main(){
    // pairlist_t pairlist;

    text_t newname = "Rakesh";
    number_t age = 22;
    std::cout << newname << '\n';
    std::cout << age;

    return 0;
}