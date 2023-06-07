#include <iostream>

using namespace std;

class User {
   private:
    string firstname;
    string lastname;

   public:
    User(string firstname="Ximira", string lastname="Uezu") {
        this->firstname = firstname;
        this->lastname = lastname;
    }

    void print_full_name() {
        cout << this->firstname << " " << this->lastname << endl;
    }
};

int main(int argc, char **argv) {
    User *user_01 = new User("ronald", "theodoro");
    User *user_02 = new User();

    user_01->print_full_name();
    user_02->print_full_name();
    return EXIT_SUCCESS;
}