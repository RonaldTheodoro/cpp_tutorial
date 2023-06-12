#pragma once

#include <iostream>

#include "document.h"

using namespace std;

class CPF : public Document {
    // https://www.macoratti.net/alg_cpf.htm
   public:
    CPF(int _document[]);
    bool is_valid();
    void show();
    void show_format();

   private:
    int *document;
    int document_size = 11;

    int calc_first_digit();
    int calc_second_digit(int);
    int multiply_and_sum_first_9_nums(int);
    int calc_sum_remainder(int);
    int calc_digit(int);
    bool check_digits(int, int);
};
