#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

bool BankAccount::withdraw(double amt) {
	if (amt <= balance && amt > 0) {
		balance -= amt;
		return true;
	} else {
		return false;
	}
}

void BankAccount::deposit(double amt) {
	if (amt > 0) {
		balace += amt;
	}
}

double BankAccount::getBalance() {
	return balance;
}