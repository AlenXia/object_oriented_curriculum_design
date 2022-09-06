#pragma once
#include<iostream>
#include"bbank.h"
#include"cbank.h"
class BBank;
class ABank; 
class ABank
{
private:
	double balance;
	static int count;
public:
	ABank();
	ABank(double b,int c);
	~ABank();
	void setBalance(double b);
	double getBalance();
	int getCount();
	friend double total(const ABank& a, const BBank& b, const CBank& c);
};
