//main.cpp
#include<iostream>
#include"Circle.h"
#include"Point.h"
#include"Shape.h"
#include"Triangle.h"
#include "Cylinder.h"
using namespace std;
int main()
{
	cout << "--------------------------------------------------------"<<endl;
	Point p1(1, 9);
	Point p2(2, 5);
	cout << "p1,p2两点间的距离为：" << p1.distance(p2) << endl;
	cout << "p1 ";p1.show();
	cout << "p2 ";p2.show();
	cout << "--------------------------------------------------------"<<endl;
	Circle c(9);
	cout << "Circle的面积为：" << c.getArea()<<endl;
	cout << "Circle的周长为：" << c.getPerimeter() << endl;
	cout << "--------------------------------------------------------" << endl;
	Cylinder cy(9, 4);
	cout << "Cylinder的表面积为：" << cy.getArea() << endl;
	cout << "Cylinder的体积为：" << cy.getVolume() << endl;
	cout << "--------------------------------------------------------" << endl;
	Triangle tr(7, 8, 9, 7, 2, 5);
	cout << "三角形的面积为：" << tr.getArea() << endl;
	cout << "三角形的表面积为：" << tr.getPerimeter() << endl;
	return 0;
}