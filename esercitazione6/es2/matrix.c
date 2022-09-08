#include "matrix.h"

#define el(m, i, j) (m)->data[(i) * (m)->cols +(j)]

struct matrix* mat_creatediag(const double* values, size_t n)
{
	if (values == NULL && n != 0)
		return NULL;

	struct matrix* ret = malloc(sizeof(struct matrix));
	ret->rows = ret->cols = n;
	ret->data = calloc(n * n, sizeof(double));

	if (n != 0) {
		for (size_t i = 0; i < n; i++) {
			el(ret, i, i) = values[i];
		}
	}

	return ret;

}