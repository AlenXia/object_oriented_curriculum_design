#pragma once
#include <iostream>
class CDROM
{
public:
	CDROM() { std::cout << "构造了一个CDROM" << std::endl; }
	CDROM(CDROM& c) { std::cout << "复制了一个CDROM" << std::endl; }
	~CDROM() { std::cout << "析构了一个CDROM" << std::endl; }

	void run();
	void stop();
private:

};
void CDROM::run()
{
	std::cout << "CDROM开始执行" << std::endl;
}

void CDROM::stop()
{
	std::cout << "CDROM结束执行" << std::endl;
}