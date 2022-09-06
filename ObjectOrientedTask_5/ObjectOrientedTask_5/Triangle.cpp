//Triangle.cpp
#include "Triangle.h"

Triangle::Triangle()
{
}

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
	this->point1 = Point(x1, y1);
	this->point2 = Point(x2, y2);
	this->point3 = Point(x3, y3);
}

Triangle::~Triangle()
{
}

void Triangle::show()
{
}

double Triangle::getArea()
{
	double a = point1.distance(point2);
	double b = point1.distance(point3);
	double c = point2.distance(point3);
	double s = 0.5 * (a + b + c);
	double area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}

double Triangle::getPerimeter()
{
	return (point1.distance(point2) + point1.distance(point2) + point3.distance(point2));
}

string Triangle::getName()
{
	return "Triangle";
}
