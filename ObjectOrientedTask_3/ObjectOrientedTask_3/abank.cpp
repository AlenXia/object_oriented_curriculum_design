#include "abank.h"

int ABank::count = 0;

ABank::ABank()
{
	count++;
}

ABank::ABank(double b,int c)
{
	balance = b;
	count = c;
}

ABank::~ABank()
{
	count--;
}

void ABank::setBalance(double b)
{
	balance = b;
}

double ABank::getBalance()
{
	return balance;
}

int ABank::getCount()
{
	return count;
}
