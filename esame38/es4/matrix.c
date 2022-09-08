#include "matrix.h"

#define el(m, i, j) (m)->data[(i)*(m)->cols + (j)]

struct matrix* mat_delete_row(const struct matrix* m, size_t i)
{
	if (m == NULL || m->rows == 1 || i >= m->rows)
		return NULL;

	struct matrix* ret = malloc(sizeof(struct matrix));
	if (ret == NULL)
		return NULL;

	ret->rows = m->rows - 1;
	ret->cols = m->cols;
	ret->data = malloc(sizeof(double) * ret->rows * ret->cols);
	if (ret->data == NULL) {
		free(ret);
		return NULL;
	}

	for (size_t i_m = 0, i_ret = 0; i_m < m->rows; i_m++) {
		if (i_m != i) {
			for (size_t j = 0; j < m->cols; j++) {
				el(ret, i_ret, j) = el(m, i_m, j);
			}
			i_ret++;
		}
	}

	return ret;
}