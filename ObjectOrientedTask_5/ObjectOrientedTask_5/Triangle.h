//Triangle.h
#pragma once
#include"Shape.h"
#include"Point.h"
#include<math.h>
class Triangle :public Shape
{
private:
	Point point1, point2, point3;
public:
	Triangle();
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
	~Triangle();
	void show();
	double getArea();
	double getPerimeter();
	string getName();
};

