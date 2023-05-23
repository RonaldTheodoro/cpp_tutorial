#include <iostream>

using namespace std;

class Instrument {
   public:
    virtual void make_sound() { cout << "Instrument playing..." << endl; }
};

class Accordion : public Instrument {
   public:
    void make_sound() { cout << "Accordion playing..." << endl; }
};

class Flute : public Accordion {
   public:
    void make_sound() { cout << "Flute playing..." << endl; }
};

int main() {
    Instrument i1;
    i1.make_sound();

    Instrument *i2 = new Accordion();
    i2->make_sound();

    Instrument *i3 = new Flute();
    i3->make_sound();
    return EXIT_SUCCESS;
}