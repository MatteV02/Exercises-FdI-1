#include "matrix.h"

#define el(m, i, j) (m)->data[(i) * (m)->cols + (j)]

struct matrix* mat_rendiquadrata(const struct matrix* a)
{
	struct matrix* ret = malloc(sizeof(struct matrix));

	if (a->rows >= a->cols) {
		ret->cols = ret->rows = a->rows;
	}
	else {
		ret->cols = ret->rows = a->cols;
	}

	ret->data = malloc(sizeof(double) * ret->rows * ret->cols);

	for (size_t i = 0; i < ret->rows; i++) {
		for (size_t j = 0; j < ret->cols; j++) {
			if (i < a->rows && j < a->cols) {
				el(ret, i, j) = el(a, i, j);
			}
			else {
				el(ret, i, j) = 0;
			}
		}
	}

	return ret;
}