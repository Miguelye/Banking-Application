#pragma once
#include "Account.h"

class Savings : public Account
{
public:
	Savings(std::string &name);
	Savings(std::string &name, float balance);
	Savings(std::string &name, float balance, float rate);
	~Savings();

	float GetInterestRate() const override;

	void AccumulateInterest() override;
private:
	float m_Rate;


};

