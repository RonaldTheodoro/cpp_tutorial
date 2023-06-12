#include "cpf.h"

CPF::CPF(int _document[]) { document = _document; }

bool CPF::is_valid() {
    int first_digit = calc_first_digit();
    int second_digit = calc_second_digit(first_digit);
    return check_digits(first_digit, second_digit);
}

int CPF::calc_first_digit() {
    int sum = multiply_and_sum_first_9_nums(10);
    int remainder = calc_sum_remainder(sum);
    return calc_digit(remainder);
}

int CPF::calc_second_digit(int first_digit) {
    int sum = multiply_and_sum_first_9_nums(11);
    sum += first_digit * 2;
    int remainder = calc_sum_remainder(sum);
    return calc_digit(remainder);
}

int CPF::multiply_and_sum_first_9_nums(int mult) {
    int sum = 0;
    for (int i = 0; i < 9; i++, mult--) {
        sum += document[i] * mult;
    }
    return sum;
}

int CPF::calc_sum_remainder(int sum) { return sum % 11; }

int CPF::calc_digit(int remainder) {
    return (remainder < 2) ? 0 : 11 - remainder;
}

bool CPF::check_digits(int first_digit, int second_digit) {
    return first_digit == document[9] && second_digit == document[10];
}

void CPF::show() {
    for (int i = 0; i < document_size; i++) {
        cout << document[i];
    }
}
