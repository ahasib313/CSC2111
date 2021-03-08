#include "circleType.cpp"
#include "pointType.cpp"
#include <iomanip>
using namespace std;

class cylinderType :  circleType
{
public:
    cylinderType();
    void setHeight(double);
    void Volume();
    void surfaceArea();
    double getHeight();
    double getRadius();
    void print();
    double CenterSides();
private:
    double height;
    double volume;
    double surface;
    double center;
    double rad;
};
    
cylinderType::cylinderType()
{

    height = 0;
    volume = 0;
    surface = 0;

}
    
void cylinderType::setHeight(double h)
{
    height=h;
}

double cylinderType::getHeight()
{
    return height;
}

void cylinderType::Volume()
{
    volume = getArea() * height;
}

void cylinderType::surfaceArea()
{
    surface = 2 * 3.14 * getRadius() * (getRadius() + height);
}

double cylinderType::CenterSides()
{
    return center;
}


double cylinderType::getRadius()
{
    return rad;
}

void cylinderType::print()
{
    cout << "The volume of the cylinder is: " << volume << endl;
    cout << "The surface area of the cylinder is: " << surface << endl;
    cout << "The radius of the cylinder is: " << endl;
    cout << "The center of the base is: " << endl;
}



int main()
{
    Circle a1;
    Cylinder a;

    a1.setPoints();
    a1.setCircumference();
    a1.setCArea();
   
    return 0;
}