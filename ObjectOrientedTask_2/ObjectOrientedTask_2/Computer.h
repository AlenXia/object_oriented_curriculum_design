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
	std::cout << "������һ��Computer" << std::endl;
}

Computer::~Computer()
{
	std::cout << "������һ��Computer" << std::endl;
}

void Computer::run()
{
	std::cout << "Computer��ʼִ��" << std::endl;
}

void Computer::stop()
{
	std::cout << "Computer����ִ��" << std::endl;
}