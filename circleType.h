#include <iostream>
#include "pointType.cpp"

class circleType : pointType
{

public:
	circleType(double);
	void setRadius(double);
	double getRadius();
	void print();
	double getArea();
	double getCircumference();
	void center(double x1, double x2, double y1, double y2);

private:
	double r;
};

circleType::circleType(double radius)
{ 
	r = 0; 
}

void circleType::setRadius(double radius) 
{ 
	radius=r ;	
}

double circleType::getRadius() 
{
	return r; 
}

double circleType::getArea() 
{
	return 3.14 * r * r; 
}

double circleType::getCircumference() 
{
	return 2 * r * 3.14; 
}

void circleType::center(double x1, double x2, double y1, double y2)
{
	cout << (float)(x1+x2)/2<< ","<<(float)(y1+y2)/2<< endl;
}

void circleType::print()
{
	pointType::printCords();

	cout << "Radius of the circle is: " << r << endl;
	cout << "Area of the circle is: " << circleType::getArea() << endl;
	cout << "Circumference of the circle is: " << circleType::getCircumference() << endl;
	cout << "The center of the circle is at coordinates: " << circleType::center << endl;
}

int main()
{
	circleType c;

	c.setRadius(4.3);

	c.setPoints(5,4);

	c.center(5, 4, 3, 2);

	c.print();


	return 0;
}