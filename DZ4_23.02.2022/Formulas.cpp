#include "Formulas.h"

n::n()
{
	value = 0;
}

void(*n::choise(int a, int b))(int, int)
{
	void (*act[])(int,int) = { bolsheravno, menshe};
	if (1)
	{
		return act[0];
	}
	else
	{
		return act[1];
	}
}



double n::getValue() const
{
	return value;
}

void n::setValue(double val)
{
	this->value = val;
}

void n::menshe(int a, int b)
{
	if (a != 0 && b != 0)
	{
		setValue(a * a + (a - b) / (sin(a * b)));
	}
	else
	{
		std::cout << "������";
	}
}

void n::bolsheravno(int a, int b)
{
	setValue(pow(a - b, (1 / 3)));
}

n::~n()
{
}

m::m()
{
	value = 0;
}

double m::getValue() const
{
	return value;
}

void m::setValue(double val)
{
	value = val;
}

void m::menshe(int n, int a, int b)
{
	if (b != 0 && (sin(a) * sin(a) - cos(n)) >= 0)
	{
		setValue((n + a) / (-b) + sqrt(sin(a) * sin(a) - cos(n)));
	}
	else
	{
		std::cout << "������";
	}
}

void m::bolshe(int n, int a, int b)
{
	setValue(b*b*b+n*a*a);
}

void m::ravno(int n, int a, int b)
{
	setValue(b*b+tan(n*a));
}

m::~m()
{
}
