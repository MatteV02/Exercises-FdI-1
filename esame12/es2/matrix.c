#include "matrix.h"

#define el(m, i, j) (m)->data[i*(m)->M+j]

void mat_swapcols(struct matrix* mat, size_t c1, size_t c2)
{
	double temp;

	for (size_t i = 0; i < mat->N; i++) {
		temp = el(mat, i, c1);
		el(mat, i, c1) = el(mat, i, c2);
		el(mat, i, c2) = temp;
	}


}