/*
 * Student.h
 *
 *  Created on: Jul 12, 2017
 *      Author: Sami
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	//Constructor Function
	Student();

	//Overload Function
	Student(string, char);

	//Destructor Function
	~Student();

	//Accessor Functions
	string getName() const;
		//getName
		//@return string - Name of student
	char getGrade() const;
			//getGrade
			//@return char - Grade of student

	//Mutator Functions
	void setName(string);
		//setName
		//@params string - name of student

	void setGrade(char);
		//setGrade
		//@params char - Grade of student


private:
	string newName;
	char newGrade;
};
#endif /* STUDENT_H_ */

