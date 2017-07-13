//============================================================================
// Name        : example_stMVar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Static Member Variables with Bank balance example.
//============================================================================

#include <iostream>
#include <string>
#include "Bank.h"

using namespace std;



int main() {

	Bank::printBankInfo();
	cout << endl;
	cout << "Ali created his account and deposited 200";

	Bank Ali("Ali", 0001, 200); //Here Ali before parentheses is object of Bank who use overload constructor
	Bank Waqas;

	cout << endl << "Waqas created an account and deposited 600";

	Waqas.setName("Waqas");
	Waqas.setAccountNumber(0002);
	Waqas.setBalance(600);

	Bank::printBankInfo();

	cout << endl << "Sami created an account and deposited 400";

	Bank Sami;
	Sami.setName("Sami");
	Sami.setAccountNumber(0003);
	Sami.setBalance(400);

	Bank::printBankInfo();

	cout<< endl << "Waqas set his balance to 250";
	Waqas.setBalance(250);

	Bank::printBankInfo();

	cout << endl << "Ali account is terminated because of lack of use";
	Ali.~Bank();

	Bank::printBankInfo();


	return 0;
}
