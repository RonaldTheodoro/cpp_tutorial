#include <iostream>

using namespace std;

class GFG
{
public:
    void call_function()
    {
        print();
    }

    void print()
    {
        cout << "Printing the base class content" << endl;
    }
};

class GFG2 : public GFG
{
public:
    void print()
    {
        cout << "Printing the derived class content" << endl;
    }
};

int main()
{
    GFG geeks_for_geeks;
    geeks_for_geeks.call_function();
    GFG2 geeks_for_geeks2;
    geeks_for_geeks2.call_function();
    return EXIT_SUCCESS;
}