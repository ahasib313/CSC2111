#include <iostream> 
#include <exception>
using namespace std;

class invalidDay :public exception {
    string day;
private:
    string message;
public:
    invalidDay(string) { this->day = day; }
    string getDay() { return day; }
    invalidDay() { message = "Day out of range"; }
    invalidDay(string a) { message = a; }
    string what() { return message; }
};

class invalidMonth :public exception {
    string month;
private:
    string message;
public:
    invalidMonth(string) { this->month = month; }
    string getMonth() { return month; }
    invalidMonth() { message = "Month out of range"; }
    invalidMonth(string a) { message = a; }
    string what() { return message; }
};


void validateMonth(string&);
void validateDay(string&, string&, string&);
void validateYear(string&);

int main() {
    string date;
    string day;
    string month;
    string year;
    cout << "Enter Birth month: ";
    cin >> month;
    cout << "Enter birth day: ";
    cin >> day;
    cout << "Enter birth year: ";
    cin >> year;

    try {
        validateYear(year);
        validateDay(day, month, year);
        validateMonth(month);
    }
    catch (exception & e) {
        cout << "An exception occurred. Exception: " << e.what() << endl;
        return 0;
    }
    cout << "Date of Birth: " << month << " " << day << ", " << year << endl;
}

void validateMonth(string& month) {
    if (month == "January") {
        month = "01";
    }
    else if (month == "February") {
        month = "02";
    }
    else if (month == "March") {
        month = "03";
    }
    else if (month == "April") {
        month = "04";
    }
    else if (month == "May") {
        month = "05";
    }
    else if (month == "June") {
        month = "06";
    }
    else if (month == "July") {
        month = "07";
    }
    else if (month == "August") {
        month = "08";
    }
    else if (month == "September") {
        month = "09";
    }
    else if (month == "October") {
        month = "10";
    }
    else if (month == "November") {
        month = "11";
    }
    else if (month == "December") {
        month = "12";
    }
    else {
        throw invalidMonth("Month out of range");
    }
    catch (invalidMonth.obj)
}
void validateDay(string& day, string& month, string& year) {
    
if (month == 2) {
        if (year % 4 == 0) {
            if (day > 29) {
                invalidDay day;
                throw invalidDay("Day out of range");
            }
        }
        else if (day > 28) {
            invalidDay day;
            throw invalidDay("Day out of range");
        }
    }
    else {
        if (day > 30) {
            invalidDay day;
            throw invalidDay("Day out of range");
        }
    }
}