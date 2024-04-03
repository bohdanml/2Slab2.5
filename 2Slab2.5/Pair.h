#pragma once

#include <string>
#include <iostream>

class Pair {
private:
    int first;
    int second;

public:
    Pair(int a, int b) : first(a), second(b) {}

   
    Pair() : first(0), second(0) {}

    //  копіювання
    Pair(const Pair& other) : first(other.first), second(other.second) {}

    Pair operator-(const Pair& other) const {
        return Pair(first - other.first, second - other.second);
    }

    Pair operator*(const Pair& other) const {
        return Pair(first * other.first, second * other.second);
    }

    int getFirst() const {
        return first;
    }

    int getSecond() const {
        return second;
    }

    
    Pair& operator=(const Pair& other) {
        first = other.first;
        second = other.second;
        return *this;
    }

    
    friend std::istream& operator>>(std::istream& is, Pair& pair) {
        is >> pair.first >> pair.second;
        return is;
    }

    
    friend std::ostream& operator<<(std::ostream& os, const Pair& pair) {
        os << "(" << pair.first << ", " << pair.second << ")";
        return os;
    }

    
    operator std::string() const {
        return "(" + std::to_string(first) + ", " + std::to_string(second) + ")";
    }

    
    Pair& operator++() {
        ++first;
        ++second;
        return *this;
    }

    
    Pair operator++(int) {
        Pair temp(*this);
        ++(*this);
        return temp;
    }

    
    Pair& operator--() {
        --first;
        --second;
        return *this;
    }

    
    Pair operator--(int) {
        Pair temp(*this);
        --(*this);
        return temp;
    }

    
    friend bool operator==(const Pair& left, const Pair& right) {
        return (left.first == right.first) && (left.second == right.second);
    }
};