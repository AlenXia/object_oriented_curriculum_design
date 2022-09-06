#pragma once
#include<iostream>
#include"abank.h"
#include"bbank.h"

class ABank;
class BBank;
class CBank
{
private:
	double balance;
	static int count;
public:
	CBank();
	CBank(double b,int c);
	~CBank();
	void setBalance(double b);
	double getBalance();
	int getCount();
	friend double total(const ABank& a, const BBank& b, const CBank& c);
};

