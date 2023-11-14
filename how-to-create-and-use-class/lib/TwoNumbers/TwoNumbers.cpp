#include "TwoNumbers.h"

TwoNumbers::TwoNumbers(float x, float y) {
    this->x = x;
    this->y = y;
}

float TwoNumbers::add() {
    return x + y;
}

float TwoNumbers::subtract() {
    return x - y;
}

float TwoNumbers::multiply() {
    return x * y;
}

float TwoNumbers::divide() {
    return x / y;
}