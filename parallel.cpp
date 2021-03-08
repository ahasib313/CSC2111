
include <iostream>
using namespace std;
class LineType
{
public:
	LineType();
	LineType(double x, double y, double z);
	double getA();
	double getB();
	double getC();
	double getSlope();
	void non_vertical();
	bool Equal(LineType L1 );
	bool Parallel(LineType& L1, LineType L2, double slope) const;
	bool Perpendicular(LineType L1, double slope) const;



private:
	float a;
	float b;
	float c;
};

LineType(double x, double y, double z)
{
	a = x;
	b = y;
	c = z;

}
void non_vertical()
{
	if (b != 0)
	{
		cout << "Slope: " << getslope() << endl;
	}
	else
	{
		cout << "Verical line" << endl;
	}

}

double lineType::getA()
{
	return a;
}

double lineType::getB()
{
	return b;
}
double lineType::getC()
{
	return c;
}
double Slope()::getSlope()
{
	return -a/b;
}

bool Equal(LineType L1)
{
	if (a == L1.getA() && b == L1.getB() && c == L1.getC())
	{
		return 1;
	}
	else
	{
		return 0;
	}
	if (a / L1.getA() == b / L1.getB() == c / L1.getC()
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool Parallel(LineType& L1, LineType L2, double slope) const
{
	if ((a == L.slope() || (L1.getA() == 0 && b == 0)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void Perpendicular(LineType& L1, LineType L2, double slope) const
{
	if (((a == 0 && L1.getB() == 0) && (L1.getA() == 0 && b == 0) && (slope * L1.slope() == -1))
	{
		cout << "Perpendicular lines"<< endl;

	}
	else
	{
		cout << "Not perpendicular"<< endl;
	}
}



int main()
{

	Linetype L1(4, 5, 6);
	cout << "First line: " << endl;
	L1.non_vertical();

	Linetype L2(2, 4, 5);
	cout << "Second line: " << endl;
	L2.non_vertical();

	if (L1.Parallel(L2, L1.slope()))
	{
		cout << "Parallel lines" << endl;
	}
	else
	{
		cout << "Not parallel" << endl;
	}
	if (L1.perpendicular(LineType L2, L1.slope()))
	{
		cout << "Perpendicular lines" << endl;
	}
	else
	{
		cout << "Not perpendicular" << endl;
	}




}
