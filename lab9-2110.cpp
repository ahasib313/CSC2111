#ifndef H_complexNumber
#define H_complexNumber
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class complexType
{
private:
    double realPart; //variable to store the real part
    double imaginaryPart; //variable to store the imaginary part
    
public:
    complexType(double real = 0, double imag = 0);
     //Constructor
    //Initializes the complex number according to the parameters.
    //Postcondition: realPart = real; imaginaryPart = imag;
    void getNumbers();
    complexType operator-(const complexType& c2) const;
    complexType operator/(const complexType& c2) const;
    complexType operator~ () const;
        void print();
};
#endif

complexType::complexType(double real, double imag)
{
    real = realPart;
    imaginaryPart = imag;
}
void complexType::getNumbers() 
{
    cout << "Enter real number: ";
    cin >> realPart;
    cout << "Enter imaginary number: ";
    cin >> imaginaryPart;
}

complexType complexType:: operator-(const complexType& c2) const 
{

    complexType temp;
    temp.realPart = realPart - c2.realPart;
    temp.imaginaryPart = imaginaryPart - c2.imaginaryPart;
    return temp;
}

complexType complexType:: operator/(const complexType& c2) const
{
    complexType temp;
    temp.realPart = ((realPart * c2.realPart) + (imaginaryPart * c2.imaginaryPart));
    temp.imaginaryPart = (-realPart * c2.imaginaryPart) + (imaginaryPart * c2.realPart);
    return temp;
}

void complexType ::print() 
{
    if (imaginaryPart < 0)
        cout << "\nComplex Number: " << realPart << imaginaryPart << "i" << endl;
    else
        cout << "\nComplex number: " << realPart << "+" << imaginaryPart << "i" << endl;
}
complexType complexType:: operator~ () const
{
    complexType temp;
    temp.realPart = realPart;
    temp.imaginaryPart = -1 * imaginaryPart;
    return temp;
}
complexType complexType:: double operator! () const
{
    double sum;
    sum = pow(realPart, 2) + pow(imaginaryPart, 2);
    return sqrt(sum);
}

int main() 
{
    complexType c;
    complexType c2;
    complexType answer;
    cout << "Enter first complex numbers (real and imaginary)" << endl;
    cout << "------------------------------------------" << endl;
    c.getNumbers();
    cout << "\nEnter second complex numbers (real and imaginary)" << endl;
    cout << "------------------------------------------" << endl;
    c2.getNumbers();
    cout << fixed << setprecision(2) << endl;
    answer = c - c2; 
    answer.print();
    return 0;
}