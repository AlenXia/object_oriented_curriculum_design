#include "Matrix.h"

Matrix::Matrix(int n)
{
	this->n = n;
	int** arr = new int* [n];
	head = arr;
	for (int i = 0;i < n;i++)
	{
		arr[i] = new int[n];
	}
	for (int i = 0;i < n;i++)
	{
		for (int j=0;j < n;j++)
		{
			arr[i][j] = (rand() % 90 + 10);
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

Matrix::~Matrix()
{
	for (int i = 0;i < n;i++)
	{
		delete[] head[i];
	}
	delete head;
}

void Matrix::findMaxMin()
{
	int Max = 9, Min = 100;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (head[i][j] >Max) Max = head[i][j];
			if (head[i][j] < Min) Min = head[i][j];
		}
	}
	std::cout << "----------------------------------------------------------------------" << std::endl;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (head[i][j] == Max) std::cout << "最大值：" << Max << "      行：" << i+1 << "      列：" << j+1 << std::endl;		}
	}
	std::cout << "----------------------------------------------------------------------"<<std::endl;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (head[i][j] == Min) std::cout << "最小值：" << Min << "      行：" << i +1<< "      列：" << j +1<< std::endl;
		}
	}
	std::cout << "----------------------------------------------------------------------" << std::endl<<std::endl;
}

void Matrix::transpose()
{
	int prior;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			prior = head[i][j];
			head[i][j] = head[j][i];
		}
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			std::cout << head[i][j] << " ";
		}
		std::cout << std::endl;
	}

}

void Matrix::change(int n)
{
	this->n = n;
	int** arr = new int* [n];
	head = arr;
	for (int i = 0;i < n;i++)
	{
		arr[i] = new int[n];
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			arr[i][j] = (rand() % 90 + 10);
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	
}
