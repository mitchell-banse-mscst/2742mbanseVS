#include "VideoAdapter.h"



VideoAdapter::VideoAdapter()
{
	vramSize = 0;
	price = 0.0;
}


VideoAdapter::~VideoAdapter()
{
}


VideoAdapter::VideoAdapter(string model, string iface, int vramSize, double price)
{
	this->model = model;
	this->iface = iface;
	this->vramSize = vramSize;
	this->price = price;
}


VideoAdapter* VideoAdapter::copy()
{
	return new VideoAdapter(this->model, this->iface, this->vramSize, this->price);;
}


string VideoAdapter::toString()
{
	string str = string();
	str.append(this->model);
	str.append(", ");
	str.append(this->iface);
	str.append(", ");

	char temp[81];
	sprintf(temp, "%dGB, $%.2f", this->vramSize, this->price);
	str.append(temp);

	return str;
}


string VideoAdapter::getModel()
{
	return this->model;
}


void VideoAdapter::setModel(string model)
{
	this->model = model;
}


string VideoAdapter::getIface()
{
	return this->iface;
}


void VideoAdapter::setIface(string iface)
{
	this->iface = iface;
}


int VideoAdapter::getVramSize()
{
	return this->vramSize;
}


void VideoAdapter::setVramSize(int vramSize)
{
	this->vramSize = vramSize;
}


double VideoAdapter::getPrice()
{
	return this->price;
}


void VideoAdapter::setPrice(double price)
{
	this->price = price;
}
