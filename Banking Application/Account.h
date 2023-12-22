#pragma once
#include <string>
#include <iostream>

class Account
{
public:
	Account(const std::string &name);
	Account(const std::string &name, float balance);
	~Account();

	const std::string GetName() const;
	float GetBalance() const;
	virtual float GetInterestRate() const; //virtual to be define in derived classes
	int GetAccountNumber() const;

	virtual void AccumulateInterest();
	virtual void Withdraw(float amount);
	void Deposit(float amount);
	
protected:
	float m_Balance;
	std::string m_Name;
private:
	int m_AccNo;
	static int s_ANGenerator;
};

