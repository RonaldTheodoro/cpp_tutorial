#include "cnpj.h"

CNPJ::CNPJ(int _document[]) { document = _document; }

bool CNPJ::is_valid() {
    int first_digit = calc_first_digit();
    int second_digit = calc_second_digit(first_digit);
    return check_digits(first_digit, second_digit);
}

int CNPJ::calc_first_digit() {
    int sum = multiply_and_sum_first_12_nums(nums_to_calc_first_digit);
    int remainder = calc_sum_remainder(sum);
    return calc_digit(remainder);
}

int CNPJ::calc_second_digit(int first_digit) {
    int sum = multiply_and_sum_first_12_nums(nums_to_calc_second_digit);
    sum += first_digit * 2;
    int remainder = calc_sum_remainder(sum);
    return calc_digit(remainder);
}

int CNPJ::multiply_and_sum_first_12_nums(int nums_to_calc_digit[]) {
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += document[i] * nums_to_calc_digit[i];
    }
    return sum;
}

int CNPJ::calc_sum_remainder(int sum) { return sum % 11; }

int CNPJ::calc_digit(int remainder) {
    return (remainder < 2) ? 0 : 11 - remainder;
}

bool CNPJ::check_digits(int first_digit, int second_digit) {
    return first_digit == document[12] && second_digit == document[13];
}

void CNPJ::show() {
    for (int i = 0; i < document_size; i++) {
        cout << document[i];
    }
}

void CNPJ::show_format() {
    cout << endl;
    for (int i = 0; i < document_size; i++) {
        cout << document[i];
        if (i == 1 || i == 4) {
            cout << ".";
        }
        if (i == 7) {
            cout << "/";
        }
        if (i == 11) {
            cout << "-";
        }
    }
    cout << endl;
}
