#include <iostream>
using namespace std;

int ack(int m, int n)
{
	if (m == 1)
	{
		return n + 1;
	}
	else if (n == 0)
	{
		return ack(m - 1, 1);
	}
	else 
	{
		return ack(m - 1, ack(m, n - 1));
	}
}

int main()
{
	int m;
	int n;
	cout << "Enter m: ";
	cin >> m;
	cout << "Enter n: ";
	cin >> n;
	cout << ack(m,n) << endl;
	return 0;
}