#pragma once
#include <iostream>
enum CPU_Rank
{
	P1 = 1, P2, P3, P4, P5, P6, P7
};
class CPU
{
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
	CPU() { std::cout << "构造了一个CPU" << std::endl; }//无参构造函数

	CPU(CPU_Rank r, int f, float v)//有参构造函数
	{
		rank = r;frequency = f;voltage = v;
		std::cout << "CPU等级：" << r << " CPU频率：" << f << " CPU电压" << v << "MHz" << std::endl;
		std::cout << "构造了一个CPU" << std::endl;
	}

	~CPU() { std::cout << "析构了一个CPU" << std::endl; }//析构函数
	void run();
	void stop();

	CPU_Rank get_rank() 
	{
		return rank;
	}

	int get_frequency()
	{
		return frequency;
	}

	float get_voltage()
	{
		return voltage;
	}

	void set_rank(CPU_Rank r)
	{
		rank = r;
	}

	void set_frequency(int f)
	{
		frequency = f;
	}

	void set_voltage(float v)
	{
		voltage = v;
	}
};

void CPU::run()
{
	std::cout << "开始执行" << std::endl;
}

void CPU::stop()
{
	std::cout << "结束执行" << std::endl;
}

