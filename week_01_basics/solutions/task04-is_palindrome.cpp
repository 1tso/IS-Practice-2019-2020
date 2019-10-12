#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	int fourthDiggit = number % 10;
	int thirdDiggit = number / 10 % 10; 
    /* 
        Example: 
        1234 / 10 = 123(because we are dividing an integer, not double), 
        123 % 10 = 3
    */
	int secondDiggit = number / 100 % 10;
	int firstDiggit = number / 1000;

	bool isPalindrome = (firstDiggit == fourthDiggit) && (secondDiggit == thirdDiggit);

	cout << boolalpha << isPalindrome << endl;

	//less readable => should be avoided even though it works
	//cout << boolalpha << (number / 1000 == number % 10 && number / 100 % 10 == number / 10 % 10) << endl;

	return 0;
}