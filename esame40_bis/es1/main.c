#include <stdlib.h>

extern double entropia(const double* v, size_t n);

int main(void)
{
	double v[] = { 1, 0 };

	double ret = entropia(v, sizeof(v) / sizeof(*v));

	return 0;
}