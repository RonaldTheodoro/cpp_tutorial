#pragma once

#include <iostream>

#include "cnpj.h"
#include "cpf.h"
#include "document.h"

using namespace std;

class DocumentFactory {
   public:
    Document* get_document(int [], int);
};
