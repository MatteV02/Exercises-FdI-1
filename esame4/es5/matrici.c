#include "matrici.h"

double* diag(double* matr, size_t n)
{
	if (matr == NULL || n == 0) {
		return NULL;
	}

	double* ret = malloc(sizeof(double) * n);

	if (ret != NULL) {
		for (size_t i = 0; i < n; i++) {
			ret[i] = matr[i * (n + 1)];
		}
	}

	return ret;

}