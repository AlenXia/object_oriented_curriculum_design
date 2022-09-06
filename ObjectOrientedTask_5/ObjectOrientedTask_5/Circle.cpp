//Circle.cpp
#include "Circle.h"

Circle::Circle()
{
}

Circle::Circle(double r)
{
	radius = r;
}

Circle::~Circle()
{
}

double Circle::getR()
{
	return radius;
}

void Circle::setR(double r)
{
	radius = r;
}

double Circle::getArea()
{
	return 3.1415926*radius*radius;
}

double Circle::getPerimeter()
{
	return 2*3.1415926*radius;
}

string Circle::getName()
{
	return "Cricle";
}
