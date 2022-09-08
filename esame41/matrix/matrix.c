#include "matrix.h"

#define el(m, i, j) (m)->data[(i)*(m)->cols + j]

struct matrix* mat_replicate(const struct matrix* m)
{
	if (m == NULL)
		return NULL;

	struct matrix* ret = malloc(sizeof(struct matrix));
	if (ret == NULL)
		return NULL;
	ret->rows = m->rows;
	ret->cols = m->cols * 2;

	ret->data = malloc(sizeof(double) * ret->rows * ret->cols);
	if (ret->data == NULL) {
		free(ret);
		return NULL;
	}

	for (size_t i = 0; i < m->rows; i++) {
		for (size_t j = 0; j < m->cols; j++) {
			double temp = el(m, i, j);
			el(ret, i, j) = temp;
			el(ret, i, j + m->cols) = temp;
		}
	}

	return ret;

}