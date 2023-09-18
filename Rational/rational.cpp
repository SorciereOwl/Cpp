#include"header.h"
#include <string>
#include <iostream>

    int Rational::gcd(int a, int b) { // ������� ��� ���������� ����������� ������ ��������
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    void Rational::reduce() { // ������� ��� ���������� �����
        int gcdValue = gcd(numerator, denominator);
        numerator /= gcdValue;
        denominator /= gcdValue;
    }

    Rational::Rational() { // ����������� ��� ����������
        numerator = 0;
        denominator = 1;
    }

    Rational::Rational(int num, int denom) { // ����������� � �����������
        numerator = num;
        denominator = denom;
        reduce();
    }

    int Rational::getNumerator() {
        return numerator;
    }

    int Rational::getDenominator() {
        return denominator;
    }

    void Rational::setNumerator(int num) {
        numerator = num;
        reduce();
    }

    void Rational::setDenominator(int denom) {
        denominator = denom;
        reduce();
    }

    Rational Rational::add(Rational other) { // ����� ��������
        int num = numerator * other.denominator + denominator * other.numerator;
        int denom = denominator * other.denominator;
        return Rational(num, denom);
    }

    Rational Rational::sub(Rational other) { // ����� ���������
        int num = numerator * other.denominator - denominator * other.numerator;
        int denom = denominator * other.denominator;
        return Rational(num, denom);
    }

    Rational Rational::mul(Rational other) { // ����� ���������
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return Rational(num, denom);
    }

    Rational Rational::div(Rational other) { // ����� �������
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        return Rational(num, denom);
    }

    bool Rational::equal(Rational other) { // ����� ��������� �� ���������
        return (numerator == other.numerator && denominator == other.denominator);
    }

    bool Rational::greater(Rational other) { // ����� ��������� �� ������
        return (numerator * other.denominator > denominator * other.numerator);
    }

    bool Rational::less(Rational other) { // ����� ��������� �� ������
        return (numerator * other.denominator < denominator* other.numerator);
    }

    std::string Rational::toString() { // ����� ��� ������ ���������� � ����� � ��������� ����
        return std::to_string(numerator) + "/" + std::to_string(denominator);
    }
