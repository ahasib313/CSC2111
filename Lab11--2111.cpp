#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	
		char op;
		double a, b;
		double result;
		string inptStr = "Invalid input.";
	try
	{
		cout << "Enter first number: ";
		cin >> a;
		cout << "\nEnter second number: ";
		cin >> b;
		cout << "\nEnter operation (*,-,/,+): ";
		cin >> op;
		
		if (!cin)
		{
			throw inptStr;
		}
		if (op == '/' && b == 0)
		{
			throw 0;
		}
		if (op == '+')
		{
			result = a + b;
			cout << a << op << b << " = " << result << endl;
		}
		if (op == '-')
		{
			result = a - b;
			cout << a << op << b << " = " << result << endl;
		}
		if (op == '/')
		{
			result = a / b;
			cout << a << op << b << " = " << result << endl;
		}
		if (op == '*')
		{
			result = a * b;
			cout << a << op << b << " = " << result << endl;
		}
	}
	catch (string s)
	{
		cout << "\n" << s << endl;
	}
	catch (int x)
	{
		cout << "\nDivision by " << x << endl;
	}
	return 0;
}