#include "Formulas.h"

n::n()
{
	value = 0;
}

void n::bolsheravno(double a, double b)
{
	setValue(pow(a - b, (1 / 3)));
}
void n::choise(double a,double b)
{

	if (a >= b)
	{
		bolsheravno(a,b);
	}
	else
	{
		menshe(a,b);
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

void n::menshe(double a, double b)
{
	if (a != 0 && b != 0)
	{
		setValue(a * a + (a - b) / (sin(a * b)));
	}
	else
	{
		std::cout << "Ошибка, установлено значение n=0";
		setValue(0);
	}
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

void m::choise(double n, double a, double b)
{
	if (n < b)
	{
		menshe(n, a, b);
	}
	else
	{
		if (n == b)
		{
			ravno(n, a, b);
		}
		else
		{
			bolshe(n, a, b);
		}
	}
}

void m::menshe(double n, double a, double b)
{
	if (b != 0 && (sin(a) * sin(a) - cos(n)) >= 0)
	{
		setValue((n + a) / (-b) + sqrt(sin(a) * sin(a) - cos(n)));
	}
	else
	{
		std::cout << "Ошибка, установлено значение m=0";
		setValue(0);
	}
}

void m::bolshe(double n, double a, double b)
{
	setValue(b*b*b+n*a*a);
}

void m::ravno(double n, double a, double b)
{
	setValue(b*b+tan(n*a));
}

m::~m()
{
}
