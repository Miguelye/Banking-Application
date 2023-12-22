#include "Transaction.h"

void Transact(Account* pAccount)
{
	std::cout << "Transaction started." << std::endl;
	std::cout << "Account Name: " << pAccount->GetName() << std::endl;
	std::cout << "Initial Balance: " << pAccount->GetBalance() << std::endl;
	pAccount->Deposit(100);
	pAccount->AccumulateInterest();
	pAccount->Withdraw(170);
	std::cout << "Interest Rate: " << pAccount->GetInterestRate() << std::endl;
	std::cout << "Final Balance: " << pAccount->GetBalance() << std::endl;

}
