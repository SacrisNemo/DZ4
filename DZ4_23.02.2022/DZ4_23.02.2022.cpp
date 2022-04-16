#include "Formulas.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	double a = 4.8;
	double b = -7.9;
	n* N = new n;
	m* M = new m;
	N->choise(a,b);
	M->choise(N->getValue(), a, b);
	delete M;
	delete N;
	return 0;
}
