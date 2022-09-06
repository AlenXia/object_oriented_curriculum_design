#include "bbank.h"

int BBank::count = 0;

BBank::BBank()
{
	count++;
}

BBank::BBank(double b,int c)
{
	balance = b;
	count = c;
}

BBank::~BBank()
{
}

void BBank::setBalance(double b)
{
	balance = b;
}

double BBank::getBalance()
{
	return balance;
}

int BBank::getCount()
{
	return count;
}
