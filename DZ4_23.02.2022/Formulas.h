#ifndef FORMULA_H
#define FORMULA_H
#include <cmath>
#include <iostream>
class n
{
private:
	double value;
public:

	n();
	n(double);
	double getValue() const;
	void setValue(double);
	void menshe(int, int);
	void bolsheravno(int, int);
	~n();
};

class m
{
private:
	double value;
public:
	m();
	m(double);
	double getValue() const;
	void setValue(double);
	void menshe(int, int, int);
	void bolshe(int, int, int);
	void ravno(int, int, int);
	~m();
};

#endif // !FORMULA_H