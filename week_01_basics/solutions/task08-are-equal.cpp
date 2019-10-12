#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;

    /*
        xOR in c++ '^'

        x | y | (x xOR y)
        0 | 0 |    0
        0 | 1 |    1
        1 | 0 |    1
        1 | 1 |    0
    */
    bool areNotEqual = firstNumber ^ secondNumber;

    cout << boolalpha << !areNotEqual << endl;

    return 0;
}