#include <string>
using namespace std;

#pragma once
class Employee
{
public:
	Employee();
	~Employee();
private:
	int idNumber;
	string name;
	string department;
	string position;
public:
	void setIdNumber(int id);
	void setPosition(string p);
	int getIdNumber();
	void setDepartment(string d);
	string getDepartment();
	void setName(string n);
	string getName();
	string getPosition();
	Employee(string n, int id);
	Employee(string n, int id, string d, string p);
};

