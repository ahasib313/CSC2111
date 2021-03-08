#include <iostream>
#include <iomanip>
using namespace std;

class pointType
{
public:
	pointType();
	pointType(double, double);
	void setPoints(double, double);
	void printCords() const ;
	double getX() const;
	double getY() const;
	double x;
	double y;	
};


pointType::pointType(double x, double y)
{
	x = 0;
	y = 0;
}

void pointType:: setPoints(double x, double y)
{
	x = x;
	y = y;
}

void pointType::printCords() const
{
	cout << "(" << x << "," << y << ")" << endl;
}

double pointType::getX() const 
{
	return x;
}

double pointType::getY() const
{
	return y;
}

int main()
{

	pointType a;

	double x, y;

	cout << "Enter an x Coordinate for point ";

	cin >> x;

	cout << "Enter an y Coordinate for point ";

	cin >> y;

	a.setPoints(x, y);

	a.printCords();

	
	return 0;

}
