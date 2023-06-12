#include "document_factory.h"

#include "cnpj.h"
#include "cpf.h"
#include "document.h"

Document* DocumentFactory::get_document(int document[], int document_type) {
    switch (document_type) {
        case 1:
            return new CPF(document);
        case 2:
            return new CNPJ(document);
        default:
            return NULL;
    }
}