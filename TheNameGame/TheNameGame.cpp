#include <iostream>
#include <string>
using namespace std;

/*
	Reads a user's name from input, and prints out the text of The Name Game:
	[name][name] Bo-[B-name]
	Banana Fanna Fo-[F-name]
	Me My Mo-[M-name]
	[name]
*/

int main() {
	string name;

	cout << "Enter a name: ";
	cin >> name;

	string ommitedName = name;
	ommitedName.erase(0, 1); //erasing the first character, and it modifies the string

	cout << name << " " << name << " Bo-B" << ommitedName << endl;
	cout << "Banana Fanna Fo-F" << ommitedName << endl;
	cout << "Me My Mo-M" << ommitedName << endl;
	cout << name << endl;

	system("pause");
	return 0;
}