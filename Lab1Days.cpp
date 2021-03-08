#include <iostream>
#include <string>
using namespace std;

class dayType {
public:
	dayType();
	void printDay(int day);
	void setToday(int);
	void setPreviousDay(int);//Setter or Mutator(Changes values)
	void setNextDay(int);
	int getToday()const;
	int getPreviousDay(int)const;
	int getNextDay()const;
private:
	int day;
	int preday;
	int nextday;

};

dayType::dayType() {
	day = 0;
	preday = 0;
	nextday = 0;
}


void dayType::setToday(int d) 
{
	day=d;
}
void dayType::setPreviousDay(int p) 
{
	preday=p;
}
void dayType::setNextDay(int n) 
{
	nextday = n;
}
int dayType::getToday()const 
{
	return day;
}
int dayType::getPreviousDay()const 
{
	return preday;
}
int dayType::getNextDay()const 
{
	return nextday;
}

void dayType::printDay(int day)
{
	if (day == 1)
	{
		cout << "Saturday" << endl;

	}
	else if (day == 2)
	{
		cout << "Sunday" << endl;
	}
	else if (day == 3)
	{
		cout << "Monday" << endl;
	}
	else if (day == 4)
	{
		cout << "Tuesday" << endl;
	}
	else if (day == 5)
	{
		cout << "Wednesday" << endl;
	}
	else if (day == 6)
	{
		cout << "Thursday" << endl;
	}
	else if (day == 7)
	{
		cout << "Friday" << endl;
	}
}


int main()
{
	//Variables
	int d;
	int p;
	int n;


	dayType today;
	dayType yesterday;
	dayType tomorrow;

	cout << "1--Saturday" << endl;
	cout << "2--Sunday" << endl;
	cout << "3--Monday" << endl;
	cout << "4--Tuesday" << endl;
	cout << "5--Wednesday" << endl;
	cout << "6--Thursday" << endl;
	cout << "7--Friday" << endl;
	
	cout << "\nEnter today's day of the week" << endl;
		cin >> d;
		today.printDay(d);
	cout << "Enter yesterday's day of the week" << endl;
		cin >> p;
		yesterday.printDay(p);
	cout << "Enter tomorrow's day of the week" << endl;
		cin >> n;
		tomorrow.printDay(n);
	cout << "Enter number of days previous" << endl;
		cin >> d;
		p=tomorrow.getPreviousDay(d);
		cout << "Previous Day is: " << endl;
			today.printDay(p);




	return 0;
}

