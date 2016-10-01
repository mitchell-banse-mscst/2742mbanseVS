#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	//cout << "Hello world!";

	// --------------------------------------------------
	// Employee 1: Default constructor
	// --------------------------------------------------
	Employee emp1;

	cout << "\n\nEmployee 1: (default constructor)\n";
	cout << "Name:       " << emp1.getName() << "\n";
	cout << "IdNumber:   " << emp1.getIdNumber() << "\n";
	cout << "Department: " << emp1.getDepartment() << "\n";
	cout << "Position:   " << emp1.getPosition() << "\n\n";

	// --------------------------------------------------
	// Employee 2: Mark Jones
	// --------------------------------------------------
	Employee emp2("Mark Jones", 39119);

	cout << "\n\nEmployee 2: (two parameters)" << "\n";
	cout << "Name:       " << emp2.getName() << "\n";
	cout << "IdNumber:   " << emp2.getIdNumber() << "\n";
	cout << "Department: " << emp2.getDepartment() << "\n";
	cout << "Position:   " << emp2.getPosition() << "\n\n";

	// --------------------------------------------------
	// Employee 3: Joy Rogers
	// --------------------------------------------------
	Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");

	cout << "\n\nEmployee 3: (four parameters)" << "\n";
	cout << "Name:       " << emp3.getName() << "\n";
	cout << "IdNumber:   " << emp3.getIdNumber() << "\n";
	cout << "Department: " << emp3.getDepartment() << "\n";
	cout << "Position:   " << emp3.getPosition() << "\n";

	cin.get();
	return 0;
}