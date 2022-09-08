#include <stdlib.h>

extern double entropia(const double* v, size_t n);

int main(void)
{
	double v[] = { .5, .6, .7 };

	double r = entropia(v, 3);

	return 0;
}