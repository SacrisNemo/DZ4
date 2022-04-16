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
	void choise(double, double);
	double getValue() const;
	void setValue(double);
	void menshe(double, double);
	void bolsheravno(double, double);
	~n();
};

class m
{
private:
	double value;
public:
	m();
	double getValue() const;
	void setValue(double);
	void choise(double, double, double);
	void menshe(double, double, double);
	void bolshe(double, double, double);
	void ravno(double, double, double);
	~m();
};

#endif // !FORMULA_H