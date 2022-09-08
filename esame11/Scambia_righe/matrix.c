#include "matrix.h"

#define el(m, i, j) (m)->data[(i) * (m)->M + (j)]

void mat_swaprows(struct matrix* mat, size_t r1, size_t r2)
{
	if (mat == NULL || mat->N < r1 || mat->N < r2)
		return;

	double temp;
	
	for (size_t j = 0; j < mat->M; j++) {
		temp = el(mat, r1, j);
		el(mat, r1, j) = el(mat, r2, j);
		el(mat, r2, j) = temp;
	}
	
}

