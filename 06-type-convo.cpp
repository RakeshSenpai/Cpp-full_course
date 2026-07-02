#include <iostream>

using namespace std;

int main(){

    //type conversation -- conversation value of one data type to another
    // implicit -- automatic
    // explicit -- precede value with new data type (int)


    // double x = (int) 3.14;
    // cout << x;
    int question = 10;
    int correct = 8;
    double score = correct/static_cast<double>(question) * 100;
    cout << score << "%";

    return 0;
}