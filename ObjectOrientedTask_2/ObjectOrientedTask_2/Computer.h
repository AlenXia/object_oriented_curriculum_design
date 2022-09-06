#pragma once
#include"CDROM.h"
#include"CPU.h"
#include"RAM.h"
class Computer
{
public:
	Computer(CPU c,RAM r,CDROM cc);
	~Computer();
	void run();
	void stop();
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
};

Computer::Computer(CPU c, RAM r, CDROM cc)
{
	cpu = c;ram = r;cdrom = cc;
	std::cout << "构造了一个Computer" << std::endl;
}

Computer::~Computer()
{
	std::cout << "析构了一个Computer" << std::endl;
}

void Computer::run()
{
	std::cout << "Computer开始执行" << std::endl;
}

void Computer::stop()
{
	std::cout << "Computer结束执行" << std::endl;
}