#include <iostream>
#include "SavingsAccount.h"
using namespace std;

int main() {
	IvoryYang::SavingsAccount save1(5000.00)
	IvoryYang::SavingsAccount save2(-5000.00)

	// Set annual interest rate to 5%
	IvoryYang::setannualInterestRate(0.05)

	// Calculate monthly interest
	cout << "First month with interest balance: "<< endl;
	save1.applyMonthlyInterest();
	cout << save1.getSavingsBalance();

	save2.applyMonthlyInterest();
	cout << save2.getSavingsBalance() << endl;

	cout << endl;

	// Calculate next month's interest
	cout<< "Second month with interest balance:\n\n";
	save1.applyMonthlyInterest();
	cout << "Save 1 Savings Balance: $" << save1.getSavingsBalance() << "\n";

	save2.applyMonthlyInterest();
	cout << "Save 2 Savings Balance: $" << save2.getSavingsBalance() << "\n";

	cout << endl;
	return 0;
}