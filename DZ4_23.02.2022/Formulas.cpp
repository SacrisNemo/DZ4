#include "Formulas.h"

n::n()
{
	value = 0;
}

double n::getvalue() const
{
	return value;
}

void n::setvalue(double v)
{
	value = v;
}

double n::menshe(int, int)
{
	return 0.0;
}

double n::bolsheravno(int, int)
{
	return 0.0;
}

n::~n()
{
}
