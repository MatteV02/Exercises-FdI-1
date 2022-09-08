#include <stdlib.h>

unsigned int* tartaglia(unsigned int* v, size_t n)
{
	/*if (v == NULL)
		return NULL;*/

	unsigned int* ret = malloc(sizeof(unsigned int) * (n + 1));

	ret[0] = 1;
	ret[n] = 1;

	for (size_t i = 1; i < n; i++) {
		ret[i] = v[i - 1] + v[i];
	}

	return ret;
}