// implement class CNPJ
// implement DocumentFactory

#include <iostream>

#include "cnpj.h"
#include "cpf.h"

using namespace std;

int main() {
    int cpf_document[] = {8, 6, 9, 8, 7, 7, 7, 7, 0, 8, 0};
    CPF *cpf = new CPF(cpf_document);
    cout << cpf->is_valid() << endl;
    cpf->show();

    int cnpj_document[] = {1, 1, 2, 2, 2, 3, 3, 3, 0, 0, 0, 1, 8, 1};
    CNPJ *cnpj = new CNPJ(cnpj_document);
    cout << cnpj->is_valid() << endl;
    cnpj->show();

    return EXIT_SUCCESS;
}