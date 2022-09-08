#include <stdlib.h>

extern void dct(const double* in, double* out, size_t N);

int main(void)
{
	double in[] = { 3,5 }, out[2];

	dct(in, out, 2);

	return 0;
}