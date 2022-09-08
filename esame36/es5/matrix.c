#include "matrix.h"

#define el(m, i, j) (m)->data[(i)*(m)->cols + (j)]

extern struct matrix* mat_permute_rows(const struct matrix* m, const size_t* p)
{
	struct matrix* ret = malloc(sizeof(struct matrix));
	ret->rows = m->rows;
	ret->cols = m->cols;
	ret->data = malloc(sizeof(double) * ret->rows * ret->cols);

	for (size_t i = 0; i < ret->rows; i++) {
		for (size_t j = 0; j < ret->cols; j++) {
			el(ret, i, j) = el(m, p[i], j);
		}
	}

	return ret;

}