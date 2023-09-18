#pragma once
#include <string>
#include <iostream>

class Rational
{
	int numerator;
	int denominator;

	int gcd(int a, int b);
	void reduce();

public:
	Rational();
	Rational(int num, int denom);
	int getNumerator();
	int getDenominator();
	void setNumerator(int num);
	void setDenominator(int denom);
	Rational add(Rational other);
	Rational sub(Rational other);
	Rational mul(Rational other);
	Rational div(Rational other);
	bool equal(Rational other);
	bool greater(Rational other);
	bool less(Rational other);
	std::string toString();
};
