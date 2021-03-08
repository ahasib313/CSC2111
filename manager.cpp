#include "manager.h"
#include <string>
#include <iostream>
#include "employee.h"
using namespace std;

Manager::Manager(string theName, float thePayRate, bool isSalaried)
{
    name = theName;
    payRate = thePayRate;
    salaried = isSalaried;

}

string Manager::getName() const
{
    return name;
}

float Manager::getPayRate() const
{
    return payRate;
}
Manager::Manager(string theName, float thePayRate, bool isSalaried): Employee(theName, thePayRate)
{
    salaried = isSalaried;
}

float Manager::pay(float hoursWorked) const
{
    if (salaried == 1)
    {
       return salaried == payRate;
    }
    else if (salaried == 0)
    {
       return hoursWorked* payRate;
    }
}bool Manager::getSalaried()const{    return getSalaried;}