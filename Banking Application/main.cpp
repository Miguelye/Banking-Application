#include <iostream>
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"

using namespace std::string_literals;
using namespace std;

int main()
{
	string name1 = "Miguel"s;
	string name2 = "Andres"s;

	Checking acc1(name1, 350.0f, 50);
	Savings  acc2(name2, 400.0f, 0.5f);

	Transact(&acc1);

	std::cout << std::endl;

	Transact(&acc2);

}
