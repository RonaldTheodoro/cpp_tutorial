#include <iostream>

using namespace std;

class Instrument {
   public:
    virtual void make_sound() = 0;
};

class Accordion : public Instrument {
   public:
    void make_sound() { cout << "Accordion playing..." << endl; }
};

class Flute : public Instrument {
   public:
    void make_sound() { cout << "Flute playing..." << endl; }
};

class Piano : public Instrument {
   public:
    void make_sound() { cout << "Piano playing..." << endl; }
};

Instrument *instrument_factory(string instrument_name) {
    if (instrument_name == "accordion")
        return new Accordion();
    else if (instrument_name == "flute")
        return new Flute();
    else if (instrument_name == "piano")
        return new Piano();
    else
        throw "Invalid instrument";
}

int main() {
    Instrument *i1 = new Accordion();
    i1->make_sound();

    Instrument *i2 = new Flute();
    i2->make_sound();

    Instrument *i3 = new Piano();
    i3->make_sound();

    Instrument *instruments[] = {instrument_factory("accordion"),
                                 instrument_factory("flute"),
                                 instrument_factory("piano")};
    for (Instrument *instrument : instruments) instrument->make_sound();

    return EXIT_SUCCESS;
}