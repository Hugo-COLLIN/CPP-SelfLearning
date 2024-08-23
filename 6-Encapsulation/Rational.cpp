//
// Created by hugoc on 23/08/2024.
//

#include <stdexcept>

using namespace std;

#include "Rational.h"

int Rational::getNumerator() const {
    return this->numerator;
}
void Rational::setNumerator(int newValue) {
    this->numerator = newValue;
}

int Rational::getDenominator() const {
    return this->denominator;
}

void Rational::setDenominator(int newValue) {
    if (newValue == 0) {
        throw runtime_error("Denominator cannot be null");
    }
    this->denominator = newValue;
}