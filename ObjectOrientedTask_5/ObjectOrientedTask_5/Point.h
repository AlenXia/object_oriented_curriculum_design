//Point.h
#pragma once
#include<math.h>
#include"Shape.h"
class Point:public Shape
{
private:
	double x, y;
public:
	Point() {};
	Point(double x, double y);
	~Point();
	double getX();
	double getY();
	void setX(double x);
	void setY(double y);
	void show();
	double distance(Point& p);
};

