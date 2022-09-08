#include "matrix.h"

struct matrix* mat_scale(const struct matrix* m, double x)
{
	if (m == NULL)
		return NULL;

	if (m->rows == 0 || m->cols == 0)
		return NULL;

	struct matrix* ret = malloc(sizeof(struct matrix));
	if (ret == NULL)
		return NULL;

	ret->rows = m->rows;
	ret->cols = m->cols;
	ret->data = malloc(sizeof(double) * ret->rows * ret->cols);
	if (ret->data == NULL)
		return NULL;

	for (size_t i = 0; i < ret->rows; i++) {
		for (size_t j = 0; j < ret->cols; j++) {
			ret->data[i * ret->cols + j] = m->data[i * m->cols + j] * x;
		}
	}

	return ret;

}