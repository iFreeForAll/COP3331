#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
	public:
		bool withdraw(double amt);
		void deposit(double amt);
		double getBalance() const;
		string getOwnerName() const;
		void setOwnerName(string newName);
		void print() const;

		BankAccount();
		BankAccount(string name, string balance);
		~BankAccount();
	private:
		double balance;
		string name;
};

#endif

