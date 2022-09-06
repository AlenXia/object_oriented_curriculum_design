//Boss.h
#pragma once
#include"Employee.h"
using namespace std;
class Boss:public Employee
{
private:
	double weeklySalary;
public:
	Boss(string name, double weeklySalary) {setName(name); this->weeklySalary = weeklySalary; }
	double earnings() { return weeklySalary; }
	string show() { return getName(); }
};

