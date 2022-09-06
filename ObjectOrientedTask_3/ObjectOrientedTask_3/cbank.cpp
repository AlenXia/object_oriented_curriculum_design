#include "cbank.h"

int g_nCount = 0;
int CBank::count = 0;

CBank::CBank()
{
	count++;
}

CBank::CBank(double b,int c)
{
	balance = b;
	count = c;
}

CBank::~CBank()
{
}

void CBank::setBalance(double b)
{
	balance = b;
}

double CBank::getBalance()
{
	return balance;
}

int CBank::getCount()
{
	return count;
}
