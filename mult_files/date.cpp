#include "date.h"

using namespace std;

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::display() {
    cout << this->day << "/" << this->month << "/" << this->year << endl;
}
