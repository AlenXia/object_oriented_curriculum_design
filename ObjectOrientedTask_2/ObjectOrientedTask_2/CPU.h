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
	CPU() { std::cout << "������һ��CPU" << std::endl; }//�޲ι��캯��

	CPU(CPU_Rank r, int f, float v)//�вι��캯��
	{
		rank = r;frequency = f;voltage = v;
		std::cout << "CPU�ȼ���" << r << " CPUƵ�ʣ�" << f << " CPU��ѹ" << v << "MHz" << std::endl;
		std::cout << "������һ��CPU" << std::endl;
	}

	~CPU() { std::cout << "������һ��CPU" << std::endl; }//��������
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
	std::cout << "��ʼִ��" << std::endl;
}

void CPU::stop()
{
	std::cout << "����ִ��" << std::endl;
}

