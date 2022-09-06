#include"abank.h"
#include"bbank.h"
#include"cbank.h"
using namespace std;

extern int g_nCount;//声明变量
int getAccountCount();
double total(const ABank& a, const BBank& b, const CBank& c);//total计算总帐户数

int main()
{
	ABank ab(19.99,2);//创建ABank对象
	BBank bb(2.21,3);//创建BBank对象
	CBank cb(564.55,4);//创建CBank对象
	g_nCount = ab.getCount() + bb.getCount() + cb.getCount();
	cout << "三个账户总余额：" << total(ab, bb, cb)<<endl;//输出账户余额
	cout << "ABank账户数：" << ab.getCount() << endl;
	cout << "BBank账户数：" << bb.getCount() << endl;
	cout << "CBank账户数：" << cb.getCount() << endl;
	cout << "总账户数(1)：" << g_nCount << endl;//第一种输出账户总数方法
	cout << "总账户数(2)" << getAccountCount()<<endl;//第二种输出账户总数方法
	return 0;
}

int getAccountCount()
{
	return g_nCount;
}

double total(const ABank& a, const BBank& b, const CBank& c)
{
	double sum = a.balance + b.balance + c.balance;
	return sum;
}