#ifndef MANAGER_H
#define MANAGER_H
#include <string>
using namespace std;

 class Manager: public Employee {
 public:
	 Manager(string theName, float thePayRate, bool isSalaried);
	
	 string getName() const;
	 float getPayRate() const;
	 bool getSalaried() const;
	
		 float pay(float hoursWorked) const;
	
 protected:
	string name;
	float payRate;
	bool salaried;

};
 #endif