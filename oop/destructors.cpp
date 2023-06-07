#include <iostream>

using namespace std;

class Book {
   public:
    string title;
    string author;
    int *rates;
    int rates_counter;
    Book(string title, string author) {
        cout << "Constructor" << endl;
        this->title = title;
        this->author = author;
        rates_counter = 2;
        rates = new int[rates_counter];
        rates[0] = 4;
        rates[1] = 5;
    }
    ~Book() {
        delete [] rates;
        cout << this->title + " Destructor" << endl;
    }
};

int main() {
    Book book_01("Millionaire Fastlane", "M. J. DeMarco");
    Book book_02("C++ Lambda Story", "Bartek Filipek");
    Book book_03 = book_02;

    return EXIT_SUCCESS;
}