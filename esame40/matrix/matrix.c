#include "matrix.h"

#define el(m, i, j) (m)->data[(i)*(m)->cols + (j)]

struct matrix* mirror_mat(const struct matrix* m)
{
	if (m == NULL)
		return NULL;

	struct matrix* r = malloc(sizeof(struct matrix));
	if (r == NULL)
		return NULL;

	r->rows = m->rows;
	r->cols = m->cols;
	r->data = malloc(sizeof(double) * r->rows * r->cols);
	if (r->data == NULL)
		return NULL;

	for (size_t j = 0; j < m->cols; j++) {
		for (size_t i = 0; i < m->rows; i++) {
			el(r, i, j) = el(m, i, m->cols - j - 1);
		}
	}

	return r;
}