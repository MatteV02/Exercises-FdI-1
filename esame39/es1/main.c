#include <stdint.h>
#include <stdlib.h>

extern double* probabilita(const uint32_t* v, size_t n);

int main(void)
{
	uint32_t v[] = { 1,2,3,4,5 };

	double* ret = probabilita(v, sizeof(v) / sizeof(*v));

	free(ret);

	return 0;
}