#pragma once
#include<iostream>
#include<stdlib.h>
class Matrix
{
private:
	int n;
	int** head;
public:
	Matrix(int n);
	~Matrix();
	void findMaxMin();
	void transpose();
	void change(int n);
};

