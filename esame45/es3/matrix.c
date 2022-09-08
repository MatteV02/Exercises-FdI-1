#include "matrix.h"

#define el(m, i, j) (m)->data[(i) * (m)->cols + (j)]

double* matrix_snake(const struct matrix* m)
{
	if (m == NULL)
		return NULL;

	double* vet = malloc(sizeof(double) * m->rows * m->cols);

	for (size_t i = 0, i_vet = 0; i < m->rows; i++) {
		for (size_t j = 0; j < m->cols; j++, i_vet++) {
			if (i % 2 == 0) {
				vet[i_vet] = el(m, i, j);
			}
			else {
				vet[i_vet] = el(m, i, m->cols - 1 - j);
			}
		}
	}

	return vet;

}