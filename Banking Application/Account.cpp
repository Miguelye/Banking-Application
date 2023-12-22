#include "Account.h"

int Account::s_ANGenerator = 1000; //Static Variables are initialized outside the constructor (Globally)


Account::Account(const std::string& name) : Account(name, 0.0f) //Delagating Constructor to minimize bugs
{
	
}

Account::Account(const std::string& name, float balance) : 
	m_Name(name),
	m_Balance(balance)
{
	m_AccNo = ++s_ANGenerator;
}

Account::~Account()
{
}

const std::string Account::GetName() const
{
	return m_Name;
}

float Account::GetBalance() const
{
	return m_Balance;
}

float Account::GetInterestRate() const
{
	return 0.0f;
}

int Account::GetAccountNumber() const
{
	return m_AccNo;
}

void Account::AccumulateInterest()
{
}

void Account::Withdraw(float amount)
{
	if (amount < m_Balance)
	{
		m_Balance -= amount;
	}
	else
	{
		std::cout << "Insuffient Balance" << std::endl;
	}
}

void Account::Deposit(float amount)
{
	m_Balance += amount;
}
