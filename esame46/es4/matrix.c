#include "matrix.h"

#define el(m, i, j) (m)->data[(i) * (m)->cols +(j)]

struct matrix* mat_pad(const struct matrix* mat)
{
	if (mat->rows == 0 || mat->cols == 0)
		return NULL;

	struct matrix* ret = malloc(sizeof(struct matrix));
	ret->rows = mat->rows * 2 - 1;
	ret->cols = mat->cols * 2 - 1;
	ret->data = malloc(sizeof(double) * ret->rows * ret->cols);

	for (size_t i = 0; i < ret->rows; i++) {
		if (i % 2 == 0) {
			for (size_t j = 0; j < ret->cols; j++) {
				if (j % 2 == 0) {
					el(ret, i, j) = el(mat, i / 2, j / 2);
				}
				else {
					el(ret, i, j) = 0;
				}
			}
		}
		else {
			for (size_t j = 0; j < ret->cols; j++) {
				el(ret, i, j) = 0;
			}
		}
	}

	return ret;

}