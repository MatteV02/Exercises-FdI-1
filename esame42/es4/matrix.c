#include "matrix.h"

#define el(m, i, j) (m)->data[(m)->cols * i + j]

struct matrix* mat_reset_cross(const struct matrix* m, size_t ir, size_t ic)
{
	if (m == NULL || ir >= m->rows || ic >= m->cols)
		return NULL;

	struct matrix* ret = malloc(sizeof(struct matrix));
	ret->cols = m->cols;
	ret->rows = m->rows;
	ret->data = malloc(sizeof(double) * ret->rows * ret->cols);

	for (size_t i = 0; i < ret->rows; i++) {
		for (size_t j = 0; j < ret->cols; j++) {
			if ((i == ir && j != ic) || (j == ic && i != ir)) {
				el(ret, i, j) = 0;
			}
			else {
				el(ret, i, j) = el(m, i, j);
			}
		}
	}

	return ret;

}