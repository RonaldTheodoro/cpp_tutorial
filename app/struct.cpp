#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    struct miscellaneous {
        string field_01;
        string field_02;
    };
    struct user {
        string firstname;
        string lastname;
        int age;
        string email;
        miscellaneous misc;
    };

    user user_01 = {"Ronald", "Theodoro", 30, "ronald@mail.com", {"xelo", "ximira"}};

    cout << user_01.firstname << endl;
    cout << user_01.lastname << endl;
    cout << user_01.age << endl;
    cout << user_01.email << endl;
    cout << user_01.misc.field_01 << endl;
    cout << user_01.misc.field_02 << endl;

    return EXIT_SUCCESS;
}