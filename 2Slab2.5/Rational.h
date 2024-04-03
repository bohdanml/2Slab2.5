#pragma once

#include "Pair.h"

class Rational {
private:
    Pair pair;

public:
    Rational(int a, int b) : pair(a, b) {}

    
    Rational() : pair(0, 1) {}

    
    Rational(const Rational& other) : pair(other.pair) {}

    Rational operator+(const Rational& other) const {
        return Rational(pair.getFirst() * other.pair.getSecond() + pair.getSecond() * other.pair.getFirst(),
            pair.getSecond() * other.pair.getSecond());
    }

    Rational operator-(const Rational& other) const {
        return Rational(pair.getFirst() * other.pair.getSecond() - pair.getSecond() * other.pair.getFirst(),
            pair.getSecond() * other.pair.getSecond());
    }

    Rational operator/(const Rational& other) const {
        return Rational(pair.getFirst() * other.pair.getSecond(), pair.getSecond() * other.pair.getFirst());
    }

    int getFirst() const {
        return pair.getFirst();
    }

    int getSecond() const {
        return pair.getSecond();
    }

    
    Rational& operator=(const Rational& other) {
        pair = other.pair;
        return *this;
    }

    
    friend std::istream& operator>>(std::istream& is, Rational& rational) {
        is >> rational.pair;
        return is;
    }

    
    friend std::ostream& operator<<(std::ostream& os, const Rational& rational) {
        os << rational.pair;
        return os;
    }

    
    operator std::string() const {
        return std::string(pair);
    }

    
    Rational& operator++() {
        ++pair;
        return *this;
    }

    
    Rational operator++(int) {
        Rational temp(*this);
        ++(*this);
        return temp;
    }

    
    Rational& operator--() {
        --pair;
        return *this;
    }

    // постфіксний декремент
    Rational operator--(int) {
        Rational temp(*this);
        --(*this);
        return temp;
    }
};