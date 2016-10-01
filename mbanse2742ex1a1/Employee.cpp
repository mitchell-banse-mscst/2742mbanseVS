#include "Employee.h"



Employee::Employee()
{
	idNumber = 0;
	name = "";
	department = "";
	position = "";
}


Employee::~Employee()
{
}


void Employee::setIdNumber(int id)
{
	idNumber = id;
}


void Employee::setPosition(string p)
{
	position = p;
}


int Employee::getIdNumber()
{
	return idNumber;
}


void Employee::setDepartment(string d)
{
	department = d;
}


string Employee::getDepartment()
{
	return department;
}


void Employee::setName(string n)
{
	name = n;
}


string Employee::getName()
{
	return name;
}


string Employee::getPosition()
{
	return position;
}


Employee::Employee(string n, int id)
{
	name = n;
	idNumber = id;
	department = "";
	position = "";
}


Employee::Employee(string n, int id, string d, string p)
{
	name = n;
	idNumber = id;
	department = d;
	position = p;
}
