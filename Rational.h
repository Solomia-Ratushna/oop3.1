

#pragma once
#include "Pair.h"

class Rational : public Pair
{
private:
	double number;
public:

	Rational();
	Rational(int, int);

	void SetNumber(int, int);
	double GetNumber() const;

	friend ostream& operator << (ostream&, const Rational&);
	friend istream& operator >> (istream&, Rational&);
	operator string() const;

	friend bool operator > (const Pair p1, const Pair p2);
	friend bool operator < (const Pair p1, const Pair p2);
	friend bool operator == (const Pair p1, const Pair p2);

	int ComparePairs(const Pair p1, const Pair p2) const;
	void ComparePairsResult(int result);
};