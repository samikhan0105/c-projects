//============================================================================
// Name        : example_stvar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printNumber();

static int x=0;

int main() {

	printNumber();
	printNumber();

	return 0;
}

void printNumber(){
	cout << (x+=5);
	cout << endl;
}
