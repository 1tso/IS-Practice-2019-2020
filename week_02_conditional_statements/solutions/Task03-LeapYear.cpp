#include <iostream>
using namespace std;

int main(){

	int year;
	cin >> year;

	//A solution with the ternary operator would look lie this:
	((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? cout << "Leap year" << endl
															: cout << "Non-Leap year" << endl;

	//A solution with if ... else statement whould look like this:
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		cout << "Leap year" << endl;
	} else {
		cout << "Non-Leap year" << endl;
	}

	return 0;
}