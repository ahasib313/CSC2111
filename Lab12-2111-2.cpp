#include <iostream>
#include <cmath>

using namespace std;

float sqrt(float x, float a, float ep)
{
    if (abs(a * a - x) <= ep)
    {
        return a;
    }
    else
    {
        a = (a * a + x) / (2 * a);
        return (sqrt(x, a, ep));
    }
}

int main()
{
    int x;
    float ep;
    cout << "Enter nonnegative real number: ";
    cin >> x;

    cout << "Enter tolerance: ";
    cin >> ep;

    cout << "Square root of " << x << " is: " << sqrt(x, x, ep) << endl;

    return 0;
}