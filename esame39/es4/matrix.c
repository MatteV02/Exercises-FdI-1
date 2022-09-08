#include "matrix.h"

#define el(m, i, j) (m)->data[(i) * (m)->cols + (j)]

struct matrix* mat_delete_col(const struct matrix* m, size_t i)
{
	if (m == NULL || m->cols <= 1 || i >= m->cols)
		return NULL;

	struct matrix* ret = malloc(sizeof(struct matrix));
	ret->cols = m->cols - 1;
	ret->rows = m->rows;
	ret->data = malloc(sizeof(double) * ret->rows * ret->cols);

	for (size_t i_for = 0; i_for < m->rows; i_for++) {
		for (size_t j = 0; j < m->cols; j++) {
			if (j < i) {
				el(ret, i_for, j) = el(m, i_for, j);
			}
			else if (j > i) {
				el(ret, i_for, j - 1) = el(m, i_for, j);
			}
		}
	}

	return ret;

}