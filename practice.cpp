#include <iostream>
#include <string>

int main(){
    using namespace std;

    std::string name;
    double mi;
    double monthlyrent;
    double foodExpense;
    double transportExpense;
    double othersExpense;




    std::cout << "Your name: ";
    cin >> name;
    std::cout << "Monthly income: ";
    cin >> mi;
    std::cout << "Monthly rent: ";
    cin >> monthlyrent;
    std::cout << "Food expenses: ";
    cin >> foodExpense;
    std::cout << "Transport expenses: ";
    cin >> transportExpense;
    std::cout << "Other expenses: ";
    cin >> othersExpense;

    cout << "Your name: " << name;

    double totalExpense;

    totalExpense = monthlyrent + foodExpense + transportExpense + othersExpense;

    cout << "Your total expense is: " << totalExpense;

    double remainingBal;

    remainingBal = mi - totalExpense;

    cout << "Your remaining Balance is: " << remainingBal;

    double savingPercentage;

    savingPercentage = (remainingBal / mi) * 100;

    cout << "Your saving percentage" << savingPercentage << "%";

    double yearlySavings;

    yearlySavings = remainingBal * 12;
    cout << "Your Yearly Income is: " << yearlySavings;


    return 0;
}