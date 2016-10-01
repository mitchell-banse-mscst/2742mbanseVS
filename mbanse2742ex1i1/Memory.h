#pragma once
#include <string>

using namespace std;

class Memory
{
public:
	Memory();
	~Memory();
private:
	string model;
	string memType;
	int size;
	double price;
public:
	Memory(string model, string memType, int size, double price);
	string toString();
	Memory* copy();
	string getModel();
	void setModel(string model);
	string getMemType();
	void setMemType(string memType);
	int getSize();
	void setSize(int size);
	double getPrice();
	void setPrice(double price);
};

