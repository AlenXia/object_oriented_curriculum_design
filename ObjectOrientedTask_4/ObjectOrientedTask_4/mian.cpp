#include"Matrix.h"
int main()
{
	int n;
	std::cout << "��������Ҫ�������׷���";
	std::cin >> n;
	std::cout << std::endl;
	Matrix ma(n);
	std::cout << "�����ɹ���"<<std::endl<<std::endl;
	std::cout << "�������ֵ����Сֵ��"<<std::endl;
	ma.findMaxMin();

	std::cout << "����ת�ã�" << std::endl;
	ma.transpose();
	std::cout << "ת�óɹ���" << std::endl << std::endl;

	std::cout << "��������Ҫ���´������׷���";
	std::cin >> n;
	ma.change(n);
	std::cout << "�����ɹ���" << std::endl << std::endl;
	return 0;
}