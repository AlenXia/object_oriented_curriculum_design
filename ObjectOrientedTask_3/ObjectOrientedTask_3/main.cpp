#include"abank.h"
#include"bbank.h"
#include"cbank.h"
using namespace std;

extern int g_nCount;//��������
int getAccountCount();
double total(const ABank& a, const BBank& b, const CBank& c);//total�������ʻ���

int main()
{
	ABank ab(19.99,2);//����ABank����
	BBank bb(2.21,3);//����BBank����
	CBank cb(564.55,4);//����CBank����
	g_nCount = ab.getCount() + bb.getCount() + cb.getCount();
	cout << "�����˻�����" << total(ab, bb, cb)<<endl;//����˻����
	cout << "ABank�˻�����" << ab.getCount() << endl;
	cout << "BBank�˻�����" << bb.getCount() << endl;
	cout << "CBank�˻�����" << cb.getCount() << endl;
	cout << "���˻���(1)��" << g_nCount << endl;//��һ������˻���������
	cout << "���˻���(2)" << getAccountCount()<<endl;//�ڶ�������˻���������
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