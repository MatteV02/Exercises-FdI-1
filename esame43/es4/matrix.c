#include "matrix.h"

#define el(m, i, j) (m)->data[(m)->cols * i + j]

bool scalar_mult(struct matrix* dst, const struct matrix* src, double k, bool accumulate)
{
	if (src == NULL || dst == NULL || dst->cols != src->cols || dst->rows != src->rows) {
		return false;
	}

	for (size_t i = 0; i < src->rows; i++) {
		for (size_t j = 0; j < src->cols; j++) {
			if (accumulate) {
				el(dst, i, j) += el(src, i, j) * k;
			}
			else {
				el(dst, i, j) = el(src, i, j) * k;
			}
		}
	}

	return true;
}