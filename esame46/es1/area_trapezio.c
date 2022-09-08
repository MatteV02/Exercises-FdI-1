#include <math.h>

double area_trapezio(double a, double b, double c, double d)
{
	double ret = 1. / 2 * (a + b) * sqrt(pow(c, 2) - 1. / 4 * pow((b - a) + (pow(c, 2) - pow(d, 2)) / (b - a), 2));

	return ret;
}