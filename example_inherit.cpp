//============================================================================
// Name        : example_inherit.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <iomanip>

#include "Circle3.h"

using namespace std;

int main() {
	Circle3 circle(37,43,2.5); //instantiate circle3 object

	//display point coordinates
	cout << endl << "X coordinate is " << circle.getX() << endl
			<< "Y Coordinate is " << circle.getY() << endl
			<< "Radius is " << circle.getRadius();

	circle.setX(2); //set new coordinate
	circle.setY(5); //set new coordinate
	circle.setRadius(3); //set new radius

	//Display

	cout << endl << "\nThe new location and radius of circle is \n";
	circle.print();

	cout << fixed << setprecision(2);

	//Display Diameter
	cout << endl << "\nDiameter is \n" <<	circle.getDiameter();

	//Display Circumference
	cout << endl << "\nCircumerefence is \n" <<	circle.getCircumference();

	//Display Area
	cout << endl << "\nArea is \n"
			<<	circle.getArea();

	return 0;
}
