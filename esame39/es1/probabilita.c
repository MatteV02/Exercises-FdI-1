#include <stdlib.h>
#include <stdint.h>

double* probabilita(const uint32_t* v, size_t n)
{
	if (v == NULL || n == 0)
		return NULL;

	double* ret = malloc(sizeof(double) * n);

	double somma_probabilita = 0;

	for (size_t i = 0; i < n; i++) {
		somma_probabilita += v[i];
	}

	if (somma_probabilita == 0) {
		free(ret);
		return NULL;
	}

	for (size_t i = 0; i < n; i++) {
		ret[i] = v[i] / somma_probabilita;
	}

	return ret;

}