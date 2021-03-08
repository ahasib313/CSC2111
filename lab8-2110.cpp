#include <iomanip>
#include <iostream>

using namespace std;

class dateType {
private:
    int month;
    int day;
    int year;
public:
    dateType(int month = 1, int day = 1, int year = 1900);
    void setDate(int m, int d, int y);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void printDate() const;
    dateType operator++();
    dateType operator--(int);
    friend ostream& operator<< (ostream&, const dateType&);
    friend istream& operator>> (istream&, dateType&);
    bool operator==(const dateType&) const;
    
};

dateType::dateType(int month = 1, int day = 1, int year = 1900)
{
    day = day;
    month = month;
    year = year;
}
void dateType::setDate(int m, int d, int y) 
{
    month = m;
    day = d;
    year = y;
}

int dateType:: getDay() const 
{

     return day;
}

int dateType::getMonth() const 
{

     return month;
}
int dateType::getYear() const
{
     return year;
}
void dateType::printDate() const
{
    cout << month << "/";
    cout << day << "/";
    cout << year << endl;
}

dateType dateType:: operator++() 
{
    day++;
    return *this;
}
   
dateType dateType:: operator--(int)
{
    dateType a(month, day, year);
    day--;
    return a;
}

dataType::dataType bool operator == (dateType& b) const
{
    return (month == b.month && day == b.day && year == b.year);
}

istream& operator>> (istream&in , dateType&c) 
{
    int d;
    int m; 
    int y;
    cout << "Enter the month: ";
    in >> m;
    cout << "Enter the day: ";
    in >> d;
    cout << "Enter the year: ";
    in >> y;
    while (d < 0 || m < 0 || y < 0) 
    {
        cout << "ERROR: Wrong input. Please try again. ";
        in >> m;
        in >> d;
        in >> y;
    }
    c.setDate(m, d, y);
    return in;
}
ostream& operator<< (ostream&out, const dateType&c) {
    c.printDate();
    return out;
}
int main() 
{
    dateType b;
    cin >> b;
    cout << "Pre-Increment: ";
    ++b;
    cout << b;
    cout << "Post-Decrement: ";
    b--;
    cout << b << endl;
    
}