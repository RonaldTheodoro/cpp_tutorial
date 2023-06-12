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
    int nums_to_calc_first_digit[12] = {5, 4, 3, 2, 9, 8, 7, 6, 5, 4, 3, 2};
    int nums_to_calc_second_digit[12] = {6, 5, 4, 3, 2, 9, 8, 7, 6, 5, 4, 3};

    int calc_first_digit();
    int calc_second_digit(int);
    int multiply_and_sum_first_12_nums(int []);
    int calc_sum_remainder(int);
    int calc_digit(int);
    bool check_digits(int, int);
};