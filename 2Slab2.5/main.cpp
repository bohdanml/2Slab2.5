#include <iostream>
#include "Rational.h"
#include "Pair.h"

int main() {
    Rational r1(5, 7);
    Rational r2(2, 6);

    Rational sum = r1 + r2;
    Rational difference = r1 - r2;
    Rational division = r1 / r2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Division: " << division << std::endl;

    return 0;
}
