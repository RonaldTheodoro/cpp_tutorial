#pragma once

#include <iostream>

using namespace std;

class Date {
   private:
    int day, month, year;

   public:
    Date(int, int, int);
    void display();
};
