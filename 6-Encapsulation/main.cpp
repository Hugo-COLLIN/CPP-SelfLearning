#include <iostream>
using namespace std;

#include "Rational.h"


int main() {
    // Errors when private in Rational:
//    Rational r;
//    r.numerator = 1;
//    r.denominator = 0;
//
//    //100ms
//    cout << "[" << r.numerator << "/" << r.denominator << "]" << endl;
//
//    double result = r.numerator / r.denominator;
//    cout << "--------" << endl;
//    cout << result << endl;

    Rational r;
    r.setNumerator(1);
    r.setDenominator(1);

    //100ms
    cout << "[" << r.getNumerator() << "/" << r.getDenominator() << "]" << endl;

    double result = r.getNumerator() / r.getDenominator();
    cout << "--------" << endl;
    cout << result << endl;

    return 0;
}