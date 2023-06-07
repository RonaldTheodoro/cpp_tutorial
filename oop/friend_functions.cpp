#include <iostream>

using namespace std;

class EquilateralTriangle {
   private:
    float a;
    float circumference;
    float area;

   public:
    void set_a(float length) {
        a = length;
        circumference = a * 3;
        area = (1.73 * a * a) / 4;
    }

    // friend void print_circumference(EquilateralTriangle);
    // friend void print_area(EquilateralTriangle);
    friend class Homework;
};

class Homework {
   public:
    void print_circumference(EquilateralTriangle equilateral_triangle) {
        cout << "circumference: " << equilateral_triangle.circumference << endl;
    }

    void print_area(EquilateralTriangle equilateral_triangle) {
        cout << "area: " << equilateral_triangle.area << endl;
    }
};

int main(int argc, char **argv) {
    EquilateralTriangle equilateral_triangle;
    equilateral_triangle.set_a(3);

    Homework homework;

    homework.print_circumference(equilateral_triangle);
    homework.print_area(equilateral_triangle);

    return EXIT_SUCCESS;
}