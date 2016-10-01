#include "Computer.h"



Computer::Computer()
{
	basePrice = 0.0;
	diskQuant = 0;
	memQuant = 0;
	vidQuant = 0;
	disk = nullptr;
	memory = nullptr;
	videoAdapter = nullptr;
}


Computer::~Computer()
{
	delete this->disk;
	delete this->memory;
	delete this->videoAdapter;
}


Computer::Computer(string model, double basePrice, Disk* disk, int diskQuant, Memory* memory, int memQuant, VideoAdapter* videoAdapter, int vidQuant)
{
	this->model = model;
	this->basePrice = basePrice;

	if (disk != nullptr) {
		this->disk = disk->copy();
		this->diskQuant = diskQuant;
	}
	else {
		this->disk = nullptr;
		this->diskQuant = 0;
	}

	if (memory != nullptr) {
		this->memory = memory->copy();
		this->memQuant = memQuant;
	}
	else {
		this->memory = nullptr;
		this->memQuant = 0;
	}

	if (videoAdapter != nullptr) {
		this->videoAdapter = videoAdapter->copy();
		this->vidQuant = vidQuant;
	}
	else {
		this->videoAdapter = nullptr;
		this->vidQuant = 0;
	}
}


string Computer::toString()
{
	string str = string();
	str.append(this->model);
	str.append(", ");
	char temp[81];
	sprintf(temp, "$%.2f\n", this->basePrice);
	str.append(temp);

	str.append(" Disk: ");
	if (this->disk == nullptr) {
		str.append("none\n");
	}
	else {
		str.append(disk->toString());
		//str += diskQuant + "\n";
		sprintf(temp, ", %d\n", + diskQuant);
		str.append(temp);
	}

	str.append(" Memory: ");
	if (this->memory == nullptr) {
		str.append("none\n");
	}
	else {
		str.append(memory->toString());
		//str += memQuant + "\n";
		sprintf(temp, ", %d\n", + memQuant);
		str.append(temp);
	}

	str.append(" Video: ");
	if (this->videoAdapter == nullptr) {
		str.append("none\n");
	}
	else {
		str.append(videoAdapter->toString());
		//str += vidQuant + "\n";
		sprintf(temp, ", %d\n", + vidQuant);
		str.append(temp);
	}
	str.append(" Total Price: ");
	// str += "$ + dollar.format(calcTotalPrice());
	sprintf(temp, "$%.2f", calcTotalPrice());
	str.append(temp);

	return str;
}


Computer* Computer::copy()
{
	return new Computer(this->model, this->basePrice, this->disk, this->diskQuant,
							this->memory, this->memQuant, this->videoAdapter, this->vidQuant);
}


double Computer::calcTotalPrice()
{
	double total = this->basePrice;
	if (this->disk != nullptr)
		total += this->disk->getPrice() * diskQuant;
	if (this->memory != nullptr)
		total += this->memory->getPrice() * memQuant;
	if (this->videoAdapter != nullptr)
		total += this->videoAdapter->getPrice() * vidQuant;

	return total;
}


string Computer::getModel()
{
	return this->model;
}


void Computer::setModel(string model)
{
	this->model = model;
}


double Computer::getBasePrice()
{
	return this->basePrice;
}


void Computer::setBasePrice(double basePrice)
{
	this->basePrice = basePrice;
}


Disk* Computer::getDisk()
{
	if (this->disk != nullptr)
		return this->disk->copy();
	else return nullptr;
}


void Computer::setDisk(Disk* disk)
{
	if (this->disk != nullptr)
		this->disk = disk->copy();
	else
		this->disk = nullptr;
}


int Computer::getDiskQuant()
{
	return this->diskQuant;
}


void Computer::setDiskQuant(int diskQuant)
{
	this->diskQuant = diskQuant;
}


Memory* Computer::getMemory()
{
	if (this->memory != nullptr)
		return this->memory->copy();
	else return nullptr;
}


void Computer::setMemory(Memory* memory)
{
	if (this->memory != nullptr)
		this->memory = memory->copy();
	else
		this->memory = nullptr;
}


int Computer::getMemQuant()
{
	return this->memQuant;
}


void Computer::setMemQuant(int memQuant)
{
	this->memQuant = memQuant;
}


VideoAdapter* Computer::getVideoAdapter()
{
	if (this->videoAdapter != nullptr)
		return this->videoAdapter->copy();
	else return nullptr;
}


void Computer::setVideoAdapter(VideoAdapter* videoAdapter)
{
	if (this->videoAdapter != nullptr)
		this->videoAdapter = videoAdapter->copy();
	else
		this->videoAdapter = nullptr;
}


int Computer::getVidQuant()
{
	return this->vidQuant;
}


void Computer::setVidQuant(int vidQuant)
{
	this->vidQuant = vidQuant;
}
