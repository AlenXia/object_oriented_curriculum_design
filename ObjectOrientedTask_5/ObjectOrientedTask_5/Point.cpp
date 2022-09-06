//Point.cpp
#include "Point.h"

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{
}

double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}

void Point::setX(double x)
{
	this->x = x;
}

void Point::setY(double y)
{
	this->y = y;
}

void Point::show()
{
	cout << "xÎª£º" << x << endl;
	cout << "yÎª£º" << y << endl;
}

double Point::distance(Point& p)
{
	double x1 = this->x;
	double x2 = p.getX();
	double y1 = this->y;
	double y2 = p.getY();
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
