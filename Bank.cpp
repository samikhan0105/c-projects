#include "Bank.h"

//Static Member variable initialization
int Bank::totalAccount = 0;
double Bank::bankBalance = 10000.0;

Bank::Bank(){
	accountNumber= 0;
	balance = 0.0;
	totalAccount++;
}

Bank::Bank(string newName, int newAccountNumber, double newBalance){
	name = newName;
	accountNumber = newAccountNumber;
	balance = newBalance;
	totalAccount++;
	bankBalance += newBalance;
}

Bank::~Bank(){
	totalAccount--;
	bankBalance -= balance;
}

string Bank::getName() const{
	return name;
}

int Bank::getAccountNumber() const{
	return accountNumber;
}

double Bank::getBalance() const{
	return balance;
}

void Bank::setName(string newName){
	name = newName;
}

void Bank::setAccountNumber(int newAccountNumber){
	accountNumber= newAccountNumber;
}

void Bank::setBalance(double newBalance){
	bankBalance -= balance;
	balance = newBalance;
	bankBalance += balance;
}

void Bank::withDraw(double withDraw){
	balance -= withDraw;
	bankBalance -= withDraw;
}

void Bank::withDeposit(double withDeposit){
	balance += withDeposit;
	bankBalance += withDeposit;
}

void Bank::printBankInfo(){
	cout << endl << endl << "Number of accounts: " << totalAccount << endl ;
	cout << endl << "Total Bank Balance : " << bankBalance << endl;
}

