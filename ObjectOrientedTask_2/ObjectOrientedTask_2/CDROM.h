#pragma once
#include <iostream>
class CDROM
{
public:
	CDROM() { std::cout << "������һ��CDROM" << std::endl; }
	CDROM(CDROM& c) { std::cout << "������һ��CDROM" << std::endl; }
	~CDROM() { std::cout << "������һ��CDROM" << std::endl; }

	void run();
	void stop();
private:

};
void CDROM::run()
{
	std::cout << "CDROM��ʼִ��" << std::endl;
}

void CDROM::stop()
{
	std::cout << "CDROM����ִ��" << std::endl;
}