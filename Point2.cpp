#include "Point2.h"

//Default constructor implementation
Point2::Point2(int xValue, int yValue){
	x = xValue;
	y = yValue;
}

int Point2::getX() const{
	return x;
}

int Point2::getY() const{
	return y;
}

void Point2::setX(int xValue){
	x= xValue;
}

void Point2::setY(int yValue){
	y= yValue;
}

void Point2::print() const{
	cout << endl << "[" << x << ", " << y << "]";
}
