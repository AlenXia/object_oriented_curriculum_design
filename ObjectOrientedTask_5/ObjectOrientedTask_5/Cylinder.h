//Cylinder.h
#pragma once
#include"Circle.h"
class Cylinder :public Circle
{
private:
	double height;
public:
	Cylinder();
	Cylinder(double h,double r);
	~Cylinder();
	double getH();
	void setH(double h);
	void show();
	double getArea();
	double getVolume();
	string getName();
};

