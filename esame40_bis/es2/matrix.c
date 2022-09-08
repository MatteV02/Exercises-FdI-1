#include "matrix.h"

#define el(m, i, j) (m)->data[(i) * (m)->cols + (j)]

struct matrix* mirror_mat(const struct matrix* m)
{
	struct matrix* ret = NULL;

	if (m != NULL && m->cols != 0 && m->rows != 0)
	{
		ret = malloc(sizeof(struct matrix));
		ret->cols = m->cols;
		ret->rows = m->rows;
		ret->data = malloc(sizeof(double) * ret->rows * ret->cols);

		for (size_t i = 0; i < ret->rows; i++) {
			for (size_t j = 0; j < ret->cols; j++) {
				el(ret, i, j) = el(m, i, ret->cols - 1 - j);
			}
		}
	}

	return ret;
}