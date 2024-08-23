//
// Created by hugoc on 23/08/2024.
//

#ifndef CPP_SELFLEARNING_RATIONAL_H
#define CPP_SELFLEARNING_RATIONAL_H

//struct with private is equivalent to class
//struct Rational {
//private:
//    int numerator;
//    int denominator;
//};

class Rational {
    int numerator;
    int denominator;

public:
    int getNumerator() const; //const = le rationnel sur lequel on travaille ne change pas d'état
    void setNumerator(int newValue);

    int getDenominator() const;
    void setDenominator(int newValue);
};

#endif //CPP_SELFLEARNING_RATIONAL_H
