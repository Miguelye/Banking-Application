#include "Checking.h"

Checking::Checking(std::string& name):Checking(name, 0.0f)
{

}

Checking::Checking(std::string& name, float balance):Checking(name, balance, 0.0f)
{

}

Checking::Checking(std::string& name, float balance, float minBalance):
	Account(name, balance), 
	m_MinBalance(minBalance)
{

}

Checking::~Checking()
{
}

void Checking::Withdraw(float amount)
{
	if ((m_Balance - amount) >= 50)
	{
		Account::Withdraw(amount);
	}
	else
	{
		std::cout << "Invalid amount" << std::endl;
	}
}

float Checking::GetMinBalance() const
{
	return m_MinBalance;
}
