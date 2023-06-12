// implement class CNPJ
// implement DocumentFactory

#include <iostream>

#include "cnpj.h"
#include "cpf.h"
#include "document.h"
#include "document_factory.h"

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


    DocumentFactory *factory = new DocumentFactory();

    Document *document_cpf = factory->get_document(cpf_document, 1);
    cout << document_cpf->is_valid() << endl;
    document_cpf->show();

    Document *document_cnpj = factory->get_document(cnpj_document, 2);
    cout << document_cnpj->is_valid() << endl;
    document_cnpj->show();

    return EXIT_SUCCESS;
}