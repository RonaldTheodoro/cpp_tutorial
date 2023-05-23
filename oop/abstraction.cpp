#include <iostream>

using namespace std;

class Smartphone {
   public:
    virtual void take_a_selfie() = 0;
    virtual void make_a_call() = 0;
};

class Android : public Smartphone {
   public:
    void take_a_selfie() { cout << "Android selfie" << endl; }
    void make_a_call() {
        cout << "Android calling" << endl;
    }
};

class IPhone : public Smartphone {
   public:
    void take_a_selfie() { cout << "IPhone selfie" << endl; }
    void make_a_call() {
        cout << "IPhone calling" << endl;
    }
};

int main(int argc, char **argv) {
    Smartphone *android = new Android();
    Smartphone *iphone = new IPhone();

    android->take_a_selfie();
    iphone->take_a_selfie();
    android->make_a_call();
    iphone->make_a_call();

    return EXIT_SUCCESS;
}