#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>

using namespace std;

class Bank{
public:
	//Default Constructor
	Bank();
	//Overload Constructor
	Bank(string, int, double);
	//Destructor
	~Bank();

	//Accessor Function
	string getName() const;
		//getName - returns name of user
		//@return string - name of user

	int getAccountNumber() const;
		//getAccountNumber - returns name of user
		//@return int - Accoount number of user

	double getBalance() const;
		//getBalance- returns Balance of user
		//@return double - Balance of user

	//Mutator Functions

	void setName(string);
		//setName - sets account name of user
		//@param string- account holder name

	void setAccountNumber(int);
		//setAccountNumber - sets account name of user
		//@param int- account number

	void setBalance(double);
		//setBalance - sets balance of user
		//@param double- Balance of user

	void withDraw(double);

	void withDeposit(double);

	static void printBankInfo();		/*As you are printing static variable in bank.cpp
									you need to put static variable behind the datatype*/
private:
	//Member Variable
	string name;
	int accountNumber;
	double balance;

	static int totalAccount;	//You cant initialize them here its forbidden
	static double bankBalance;		//You can initialize in your cpp file in this Bank.cpp
};

#endif
