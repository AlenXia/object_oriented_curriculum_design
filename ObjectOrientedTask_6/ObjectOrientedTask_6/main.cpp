//main.cpp
#include<iostream>
#include"Employee.h"
#include"Boss.h"
#include"PieceWorker.h"
#include"HourlyWorker.h"
using namespace std;

int main()
{
	Boss b("���ϰ�",1000);
	PieceWorker p("�Ƽ���", 200, 15);
	HourlyWorker h("Сʱ��", 200, 88);
	Employee* em;

	em = &b;
	cout << "����Ϊ��" << em->show() << " ����Ϊ��" << em->earnings()<<endl;
	em = &p;
	cout << "����Ϊ��" << em->show() << " ����Ϊ��" << em->earnings()<<endl;
	em = &h;
	cout << "����Ϊ��" << em->show() << " ����Ϊ��" << em->earnings()<<endl;

	return 0;
}