#pragma once
#include <string>

using namespace std;

class VideoAdapter
{
public:
	VideoAdapter();
	~VideoAdapter();
private:
	string model;
	string iface;
	int vramSize;
	double price;
public:
	VideoAdapter(string model, string iface, int vramSize, double price);
	VideoAdapter* copy();
	string toString();
	string getModel();
	void setModel(string model);
	string getIface();
	void setIface(string iface);
	int getVramSize();
	void setVramSize(int vramSize);
	double getPrice();
	void setPrice(double price);
};

