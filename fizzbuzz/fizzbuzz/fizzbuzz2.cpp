#include <iostream>
using namespace std;

/*
	Same fizzbuzz but user enters amount of numbers and it checks for an error
*/

int main() {

	int num = 0;

	//asking user to enter an integer number
	cout << "Enter the positive integer: " << endl;
	cin >> num;

	//checking if user entered a number and if it's positive
	while (!cin || num <= 0) {
		cout << "Bad user. Enter a positive integer!";
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> num;
	}

	for (int i = 1; i <= num; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			cout << "fizzbuzz" << endl;
		}
		else if (i % 3 == 0) {
			cout << "fizz" << endl;
		}
		else if (i % 5 == 0) {
			cout << "buzz" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}