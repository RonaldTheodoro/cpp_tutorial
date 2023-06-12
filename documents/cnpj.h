#pragma once

#include <iostream>

#include "document.h"

using namespace std;

class CNPJ : public Document {
    // https://macoratti.net/alg_cnpj.htm
   public:
    CNPJ(int _document[]);
    bool is_valid();
    void show();

   private:
    int *document;
    int document_size = 14;
};