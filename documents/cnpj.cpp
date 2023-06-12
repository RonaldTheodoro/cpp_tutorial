#include "cnpj.h"

CNPJ::CNPJ(int _document[]) { document = _document; }

bool CNPJ::is_valid() { return true; }

void CNPJ::show() {
    for (int i = 0; i < document_size; i++) {
        cout << document[i];
    }
}
