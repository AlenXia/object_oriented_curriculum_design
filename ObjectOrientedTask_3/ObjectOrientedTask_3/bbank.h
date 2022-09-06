#pragma once
#include<iostream>
#include"abank.h"
#include"cbank.h"

class ABank;
class CBank;
class BBank
{
private:
	double balance;
	static int count;
public:
	BBank();
	BBank(double b,int c);
	~BBank();
	void setBalance(double b);
	double getBalance();
	int getCount();
	friend double total(const ABank& a, const BBank& b, const CBank& c);
};

