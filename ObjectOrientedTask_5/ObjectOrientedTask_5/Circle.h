//Circle.h
#pragma once
#include"Shape.h"
using namespace std;
class Circle:public Shape
{
private:
	double radius;
public:
	Circle();
	Circle(double r);
	~Circle();
	double getR();
	void setR(double r);
	double getArea();
	double getPerimeter();
	string getName();
};

