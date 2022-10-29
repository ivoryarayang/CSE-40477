#include <iostream>
#include <iomanip>
#include "SavingsAccount.h"

using namespace std;

IvoryYang::SavingsAccount(double savingsBalance) {
	if (savingsBalance < 0) {
		cout << "Error: Value should be greater than or equal to 0" << endl;
		this -> savingsBalance = 0;
	}
	else {
		this -> savingsBalance = savingsBalance;
	}
}

// Get method for savings balance
double IvoryYang::getSavingsBalance() {
	return savingsBalance;
}

// Set method for setting value of annual interest rate
void IvoryYang::setAnnualInterestRate(double annualRate) {
	if (annualRate < 0) {
		cout << "Error: Value should be greater than or equal to 0" << endl;
		annualInterestRate = 0;
	}
	else annualInterestRate = annualRate;
}

// Apply monthly interest
void IvoryYang::applyMonthlyInterest()
{
	savingsBalance += ((savingsBalance * annualInterestRate) / 12);
}
