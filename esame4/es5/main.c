#include "matrici.h"

int main(void)
{
	size_t n = 3;
	double* matr = malloc(sizeof(double) * n * n);

	for (size_t i = 0; i < n * n; i++) {
		matr[i] = i + 1;
	}

	double* ret = diag(matr, n);

	free(ret);
	free(matr);
	return 0;
}