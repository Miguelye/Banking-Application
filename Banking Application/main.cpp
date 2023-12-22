#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"

using namespace std::string_literals;
using namespace std;

int main()
{
	string name = "Miguel"s;
	Checking acc1(name, 350.0f);

	cout << "Account Name is: " << acc1.GetName() << endl;
	cout << "Account Balance is: " << acc1.GetBalance() << endl;
	cout << "Account Number is: " << acc1.GetAccountNumber() << endl;

	acc1.Deposit(500.0f);
	
	cout << "Account Balance is: " << acc1.GetBalance() << endl;

	acc1.Withdraw(800.0f);

	cout << "Account Balance is: " << acc1.GetBalance() << endl;

	acc1.Withdraw(0.1f);
}
