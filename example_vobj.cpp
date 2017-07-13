//============================================================================
// Name        : example_vobj.cpp
// Author      : Sami
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>

#include "Student.h"

using namespace std;

void fillVector(vector<Student>&);
	//fillVector - Fills in student information
	//@param vector<Student>& - Students in class

void printVector(const vector<Student>&);
	//printVector - Prints the information of all students
	//@param vector<Student>& -students in class

int main() {
	vector<Student> myClass;

	fillVector(myClass);
	printVector(myClass);

	return 0;
}

void fillVector(vector<Student>& newMyClass){
	string name;
	int classSize;
	char grade;
	cout << "How many students are in your class" << endl;
	cin >> classSize;

	for(int i = 0; i<classSize; i++){
		cout << "Enter Student Name : " << endl;
		cin >> name ;
		cout << "Enter your grade : " << endl;
		cin >> grade;

		Student newStudent(name,grade);
		newMyClass.push_back(newStudent);
		cout << endl;
	}
	cout << endl;
}

void printVector(const vector<Student>& newMyClass){

	unsigned int size = newMyClass.size();
	for(unsigned int i = 0 ; i < size ; i++){
		cout << "Student Name : " << newMyClass[i].getName() <<  endl;
		cout << "Student Grade : " << newMyClass[i].getGrade() <<  endl;
		cout << endl;
	}
}
