#include <iostream>

using namespace std;

int main(){

    int a = 10;
    int b = 2;
    cout << "Addition = " << a + b << endl;
    cout << "Substraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Divison = " << a / b << endl;
    cout << "Modulus = " << a % b << endl;

    //Increment and decrement

    int x = 5;
    cout << "x: " << x << endl;
    cout << "x++: " << x++ << endl;
    cout << "After x++: " << x << endl;
    cout << "++x: " << ++x << endl;
    cout << "After ++x: " << x << endl;
    cout << "x--: " << x-- << endl;
    cout << "After x--: " << x << endl;
    cout << "--x: " << --x << endl;
    cout << "After --x: " << x << endl;
    return 0;
};