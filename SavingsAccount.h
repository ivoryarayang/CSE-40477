#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

using namespace std;
namespace IvoryYang {
	class SavingsAccount;
}

class IvoryYang::SavingsAccount {
public:
	double savingsBalance;
	static double annualInterestRate;

	SavingsAccount (double savingsBalance);

	// Get method
	double getSavingsBalance() const {return savingsBalance; }

	// Set method
	static void setAnnualInterestRate(double annualRate);

	// Method for applying monthly interest
	void applyMonthlyInterest();
};
#endif