//PieceWorker.h
#pragma once
#include"Employee.h"
using namespace std;
class PieceWorker:public Employee
{
private:
	double wagePerPiece;
	int quantity;
public:
	PieceWorker(string name, double wagePerPiece, int quantity) {setName(name);this->wagePerPiece = wagePerPiece;this->quantity = quantity; }
	void setWagePerPiece(double wagePerPiece) { this->wagePerPiece = wagePerPiece; }
	void setQuantity(int quantity) { this->quantity = quantity; }
	double earnings() { return wagePerPiece*quantity; }
	string show() { return getName(); }
};

