#include "matrix.h"

#include <string.h>

#define el(m, i, j) (m)->data[(m)->cols * i + j] 

struct vector* mat_vectorize(const struct matrix* m, enum vectorize_by dir)
{
	if (m == NULL || dir < 0 || dir > 1) {
		return NULL;
	}

	struct vector* ret = malloc(sizeof(struct vector));
	ret->n = m->rows * m->cols;
	ret->data = malloc(sizeof(double) * ret->n);

	switch (dir)
	{
	case BY_ROW:
		memcpy(ret->data, m->data, ret->n * sizeof(double));
		break;
	case BY_COLUMN:

		for (size_t i = 0, k = 0; i < m->cols; i++) {
			for (size_t j = 0; j < m->rows; j++, k++) {
				ret->data[k] = el(m, j, i);
			}
		}

		break;
	}

	return ret;

}