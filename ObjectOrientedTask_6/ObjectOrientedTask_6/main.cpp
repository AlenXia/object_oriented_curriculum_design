//main.cpp
#include<iostream>
#include"Employee.h"
#include"Boss.h"
#include"PieceWorker.h"
#include"HourlyWorker.h"
using namespace std;

int main()
{
	Boss b("大老板",1000);
	PieceWorker p("计件工", 200, 15);
	HourlyWorker h("小时工", 200, 88);
	Employee* em;

	em = &b;
	cout << "姓名为：" << em->show() << " 工资为：" << em->earnings()<<endl;
	em = &p;
	cout << "姓名为：" << em->show() << " 工资为：" << em->earnings()<<endl;
	em = &h;
	cout << "姓名为：" << em->show() << " 工资为：" << em->earnings()<<endl;

	return 0;
}