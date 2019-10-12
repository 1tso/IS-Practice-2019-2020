#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;

    bool areEqual = firstNumber ^ secondNumber;

    cout << boolalpha << areEqual << endl;

    return 0;
}