#pragma once
#include <iostream>
class RAM
{
public:
	RAM() { std::cout << "构造了一个RAM" << std::endl; }
	RAM(RAM& r) { std::cout << "复制构造了一个RAM" << std::endl; }
	~RAM() { std::cout << "析构了一个RAM" << std::endl; }
	void run();
	void stop();

};
void RAM::run()
{
	std::cout << "RAM开始执行" << std::endl;
}

void RAM::stop()
{
	std::cout << "RAM结束执行" << std::endl;
}