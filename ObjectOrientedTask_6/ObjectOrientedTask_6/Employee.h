//Employee.h
#pragma once
#include<iostream>
using namespace std;
class Employee
{
private:
	string name;
public:
	Employee() { name = "Employee"; }
	Employee(string name) { this->name = name; }
	~Employee() {}       
	void setName(string name) { this->name = name; }
	string getName() { return name; }
	virtual string show() = 0;
	virtual double earnings() = 0;
};