#include "matrix.h"

struct matrix* mat_copy(const struct matrix* mat)
{
	if (mat == NULL || mat->M == 0 || mat->N == 0)
		return NULL;

	struct matrix* ret = malloc(sizeof(struct matrix));
	if (ret == NULL)
		return NULL;

	ret->M = mat->M;
	ret->N = mat->N;
	ret->data = malloc(sizeof(double) * mat->M * mat->N);
	if (ret->data == NULL) {
		free(ret);
		return NULL;
	}

	for (size_t i = 0; i < mat->M * mat->N; i++) {
		ret->data[i] = mat->data[i];
	}

	return ret;

}