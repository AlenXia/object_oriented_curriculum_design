#pragma once
#include <iostream>
class RAM
{
public:
	RAM() { std::cout << "������һ��RAM" << std::endl; }
	RAM(RAM& r) { std::cout << "���ƹ�����һ��RAM" << std::endl; }
	~RAM() { std::cout << "������һ��RAM" << std::endl; }
	void run();
	void stop();

};
void RAM::run()
{
	std::cout << "RAM��ʼִ��" << std::endl;
}

void RAM::stop()
{
	std::cout << "RAM����ִ��" << std::endl;
}