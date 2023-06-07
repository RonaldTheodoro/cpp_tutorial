#include <iostream>

using namespace std;

class User {
   private:
    string firstname;
    string lastname;
    int age;
    string email;

   public:
    User() {
        this->firstname = "";
        this->lastname = "";
        this->age = -1;
        this->email = "";
    }

    User(string firstname, string lastname, int age, string email) {
        this->firstname = firstname;
        this->lastname = lastname;
        this->age = age;
        this->email = email;
    }

    User(string firstname, string lastname) {
        this->firstname = firstname;
        this->lastname = lastname;
        this->age = -1;
        this->email = firstname + "." + lastname + "@mail.com";
    }

    void print_full_name() {
        cout << this->firstname << " " << this->lastname << endl;
    }
};

int main(int argc, char **argv) {
    User *user_01 = new User("ronald", "theodoro");
    User *user_02 = new User("saldina", "nurak", 27, "saldina@gmail.com");
    User *user_03 = new User("anna", "lopez", 28, "anna@gmail.com");
    User *user_04 = new User();

    user_01->print_full_name();
    user_02->print_full_name();
    user_03->print_full_name();
    user_04->print_full_name();
    return EXIT_SUCCESS;
}