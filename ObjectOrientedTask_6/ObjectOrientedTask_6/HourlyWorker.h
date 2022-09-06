//HourlyWorker.h
#pragma once
#include"Employee.h"
using namespace std;
class HourlyWorker :public Employee
{
private:
	double wage;
	double hours;
public:
	HourlyWorker(string name, double wage, double hours) { setName(name); this->wage = wage;this->hours = hours; }
	double earnings() { return wage*hours; }
	string show() { return getName(); }
};

