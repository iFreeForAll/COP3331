#include <iostream>
using namespace std;

/*
	Program accepts numbers from the user until they enter something invalid, then print the average
	of everythig they entered
*/

int main() {

	double num, avg, sum = 0;
	int amount = 0;

	cout << "Enter a number: ";
	cin >> num;

	if (!cin) {
		cout << "Error: division by zero" << endl;
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> num;
	}

	while (cin) {
		amount += 1;
		sum += num;
		cin >> num;
	}

	avg = sum / amount;

	cout << "Average: " << avg << endl;

	system("pause");
	return 0;
}