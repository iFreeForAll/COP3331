#include <iostream>
using namespace std;

/*
	Prints the numbers 1-100, one per line, and if it 
	- multiples of 3 replaced by "fizz"
	- multiples of 5 replced by "buzz"
	- multiples of 3 and 5 replaced by "fizzbuzz"
*/

int main() {

	for (int i = 1; i <= 100; i++) {
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