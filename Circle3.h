#ifndef CIRCLE3_H
#define CIRCLE3_H

#include <iostream>
#include <string>

using namespace std;

#include "Point2.h"

class Circle3 : public Point2{
public:
	//Constructor definition
	Circle3(int=0, int=0 , double = 0.0);

	//Accessor functions
	double getRadius() const;
		//get the radius
	double getDiameter() const;
		//get the Diameter
	double getCircumference() const;
		//get the Circumference
	double getArea() const;
		//get the Area

	//mutator function
	void setRadius(double);
		//set the radius value

	void print() const;
private:
double radius;
};

#endif
