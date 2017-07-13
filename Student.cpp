/*
 * Student.cpp
 *
 *  Created on: Jul 12, 2017
 *      Author: Sami
 */

#include "Student.h"

Student::Student() {
	// TODO Auto-generated constructor stub
	newGrade = ' ';
}

Student::Student(string name, char grade){
	newName = name;
	newGrade = grade;
}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

string Student::getName() const{
	return newName;
}

char Student::getGrade() const{
	return newGrade;
}

void Student::setName(string name){
	newName = name;
}

void Student::setGrade(char grade){
	newGrade = grade;
}
