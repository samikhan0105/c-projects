#include "Circle3.h"

Circle3::Circle3(int xValue, int yValue, double radiusValue){
	x = xValue;
	y = yValue;
	setRadius(radiusValue);
}

void Circle3::setRadius(double radiusValue){
	radius = (radiusValue < 0.0 ? 0.0 : radiusValue);
}	//end function set radius

double Circle3::getRadius() const{
	return radius;
}

double Circle3::getDiameter() const{
	return 2*radius;
}

double Circle3::getCircumference() const{
	return 3.14159 * getDiameter();
}

double Circle3::getArea() const{
	return 3.14159* radius * radius;
}

void Circle3::print() const{
	cout << endl << "Center = [" << x << ", " << y << "]"
		<< "; Radius = " << radius;
} //end function print
