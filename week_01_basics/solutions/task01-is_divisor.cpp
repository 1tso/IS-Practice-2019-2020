#include <iostream>
using namespace std;

int main() {
	int firstNumber, secondNumber;
	cin >> firstNumber >> secondNumber;

	bool isDivisor = secondNumber % firstNumber == 0;
    // Note: x % y, for x < y returns x, because x = q*y + r. where r is the reminder

	cout << boolalpha << isDivisor << endl;
    // Note: boolalpha expects variable of type bool

	return 0;
}