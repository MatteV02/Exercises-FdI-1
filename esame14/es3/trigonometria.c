#include <math.h>

double solve(double a)
{
	double x_i, ris_parz = 0;

	do {
		x_i = ris_parz;
		ris_parz = x_i + (cos(x_i) - a * x_i) / (sin(x_i) + a);
	} while (fabs(ris_parz - x_i) >= 1e-10);

	return x_i;

}