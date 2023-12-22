#pragma once
#include "Account.h"

class Checking :
    public Account
{
public:
	Checking(std::string& name);
	Checking(std::string& name, float balance);
	~Checking();

	void Withdraw(float amount) override;
private:
	float m_MinBalance = 50.0f;
};

