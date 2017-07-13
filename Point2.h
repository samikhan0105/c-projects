#ifndef POINT2_H
#define POINT2_H

#include <iostream>
#include <string>

using namespace std;

class Point2{

public:

	Point2(int= 0 , int = 0); //default constructor

	//Accessor functions
	int getX() const;
		//getX - return value of X
	int getY() const;
		//getY return value of y

	//Mutator functions
	void setX(int);
		//sets value of x

	void setY(int);
		//sets value of y

	void print() const;	//Output point 2 object

protected:
	//Protected member variable
	int x;	//x part of cordinate pair
	int y;	//y part of cordinate pair
};

#endif
