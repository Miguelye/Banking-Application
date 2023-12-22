#include "Savings.h"

Savings::Savings(std::string &name):Savings(name, 0.0f)
{

}

Savings::Savings(std::string &name, float balance) : Savings(name, balance, 0.0f)
{

}

Savings::Savings(std::string &name, float balance, float rate):
	Account(name, balance),
	m_Rate(rate)
{

}

Savings::~Savings()
{
}

float Savings::GetInterestRate() const
{
	return m_Rate;
}

void Savings::AccumulateInterest()
{
	m_Balance += (m_Balance * m_Rate);
}

