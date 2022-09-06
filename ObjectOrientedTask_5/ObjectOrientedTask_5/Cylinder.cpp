//Cylinder.cpp
#include "Cylinder.h"

Cylinder::Cylinder()
{
}

Cylinder::Cylinder(double h, double r)
{	
	this->height = h;
	Circle::setR(r);
}

Cylinder::~Cylinder()
{
}

double Cylinder::getH()
{
	return height;
}

void Cylinder::setH(double h)
{
	this->height = h;
}

void Cylinder::show()
{
	std::cout << "heightÎª£º" << height << endl;
}

double Cylinder::getArea()
{
	return (Circle::getArea()*2)+(Circle::getPerimeter()*height);
}

double Cylinder::getVolume()
{
	return Circle::getArea()*height;
}

string Cylinder::getName()
{
	return "Cylinder";
}
