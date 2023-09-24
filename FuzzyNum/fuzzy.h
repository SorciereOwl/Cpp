#pragma once
#include <iostream>

class FuzzyNumber {
public:
	FuzzyNumber(float x, float e1, float e2);
	FuzzyNumber(const FuzzyNumber& other);
	~FuzzyNumber();

	FuzzyNumber operator+(const FuzzyNumber& other) const;
	FuzzyNumber operator-(const FuzzyNumber& other) const;
	FuzzyNumber operator*(const FuzzyNumber& other) const;
	// ...

	bool operator==(const FuzzyNumber& other) const;
	bool operator<(const FuzzyNumber& other) const;
	// ...

	FuzzyNumber& operator=(const FuzzyNumber& other);

	friend std::ostream& operator<<(std::ostream& os, const FuzzyNumber& number);
	friend std::istream& operator>>(std::istream& is, FuzzyNumber& number);

private:
	float* x;
	float* e1;
	float* e2;
};