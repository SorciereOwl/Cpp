#include "fuzzy.h"

FuzzyNumber::FuzzyNumber(float x, float e1, float e2) {
    this->x = new float(x);
    this->e1 = new float(e1);
    this->e2 = new float(e2);
}

FuzzyNumber::FuzzyNumber(const FuzzyNumber& other) {
    x = new float(*(other.x));
    e1 = new float(*(other.e1));
    e2 = new float(*(other.e2));
}

FuzzyNumber::~FuzzyNumber() {
    delete x;
    delete e1;
    delete e2;
}

FuzzyNumber FuzzyNumber::operator+(const FuzzyNumber& other) const {
    float newX = *x + *(other.x);
    float newE1 = *(this->e1) + *(other.e1);
    float newE2 = *(this->e2) + *(other.e2);

    return FuzzyNumber(newX, newE1, newE2);
}

FuzzyNumber FuzzyNumber::operator-(const FuzzyNumber& other) const {
    float newX = *(this->x) - *(other.x);
    float newE1 = *(this->e1) + *(other.e1);
    float newE2 = *(this->e2) + *(other.e2);

    return FuzzyNumber(newX, newE1, newE2);
}

FuzzyNumber FuzzyNumber::operator*(const FuzzyNumber& other) const {
    float newX = *(this->x) * *(other.x);
    float newE1 = *(this->x) * *(other.e1) + *(this->e1) * *(other.x) - *(this->e1) * *(other.e1);
    float newE2 = *(this->x) * *(other.e2) + *(this->e2) * *(other.x) + *(this->e2) * *(other.e2);

    return FuzzyNumber(newX, newE1, newE2);
}

bool FuzzyNumber::operator==(const FuzzyNumber& other) const {
    return (*(this->x) == *(other.x)) && (*(this->e1) == *(other.e1)) && (*(this->e2) == *(other.e2));
}

bool FuzzyNumber::operator<(const FuzzyNumber& other) const {
    return (*(this->x) - *(this->e1) < *(other.x) - *(other.e1)) && (*(this->x) + *(this->e2) < *(other.x) + *(other.e2));
}

FuzzyNumber& FuzzyNumber::operator=(const FuzzyNumber& other) {
    if (this != &other) {

        *x = *other.x;
        *e1 = *other.e1;
        *e2 =*other.e2;
    }

    return *this;
}

std::ostream& operator<<(std::ostream& os, const FuzzyNumber& number) {
    os << *(number.x) << " - " << *(number.e1) << ", " << *(number.x) << ", " << *(number.x) << " + " << *(number.e2);
    return os;
}

std::istream& operator>>(std::istream& is, FuzzyNumber& number) {
    float x, e1, e2;
    is >> x >> e1 >> e2;

    *(number.x) = x;
    *(number.e1) = e1;
    *(number.e2) = e2;

    return is;
}