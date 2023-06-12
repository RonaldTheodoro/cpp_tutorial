#include <iostream>

#include "cpf.h"

using namespace std;

int main() {
    int document[] = {8, 6, 9, 8, 7, 7, 7, 7, 0, 8, 0};
    CPF *cpf = new CPF(document);
    cout << cpf->is_valid() << endl;
    cpf->show();

    return EXIT_SUCCESS;
}