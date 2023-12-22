#pragma once
#include "Account.h"

class Checking :
    public Account
{
public:
	Checking(std::string& name);
	Checking(std::string& name, float balance);
	Checking(std::string& name, float balance, float minBalance);
	~Checking();

	void Withdraw(float amount) override;
	float GetMinBalance() const;
private:
	float m_MinBalance;
};

