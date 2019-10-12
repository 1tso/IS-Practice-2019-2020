#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    bool isDivisibleBy2 = number % 2 == 0;
    bool isDivisibleBy3 = number % 3 == 0;
    bool isDivisibleBy5 = number % 5 == 0;

    cout << boolalpha << (isDivisibleBy2 && isDivisibleBy3 && !isDivisibleBy5) << endl;

    return 0;
}