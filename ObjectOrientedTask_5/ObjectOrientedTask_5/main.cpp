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
	cout << "p1,p2�����ľ���Ϊ��" << p1.distance(p2) << endl;
	cout << "p1 ";p1.show();
	cout << "p2 ";p2.show();
	cout << "--------------------------------------------------------"<<endl;
	Circle c(9);
	cout << "Circle�����Ϊ��" << c.getArea()<<endl;
	cout << "Circle���ܳ�Ϊ��" << c.getPerimeter() << endl;
	cout << "--------------------------------------------------------" << endl;
	Cylinder cy(9, 4);
	cout << "Cylinder�ı����Ϊ��" << cy.getArea() << endl;
	cout << "Cylinder�����Ϊ��" << cy.getVolume() << endl;
	cout << "--------------------------------------------------------" << endl;
	Triangle tr(7, 8, 9, 7, 2, 5);
	cout << "�����ε����Ϊ��" << tr.getArea() << endl;
	cout << "�����εı����Ϊ��" << tr.getPerimeter() << endl;
	return 0;
}