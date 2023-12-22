#include "Checking.h"

Checking::Checking(std::string& name):Checking(name, 0.0f)
{

}

Checking::Checking(std::string& name, float balance):Account(name, balance)
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
