#include "matrix.h"

#define el(m, i, j) (m)->data[i * (m)->M + j]

struct matrix* mat_transpose(const struct matrix* mat)
{
	if (mat == NULL || mat->N == 0 || mat->M == 0) {
		return NULL;
	}

	struct matrix* ret = malloc(sizeof(struct matrix));
	if (ret != NULL) {

		ret->M = mat->N;
		ret->N = mat->M;
		ret->data = malloc(sizeof(double) * ret->M * ret->N);
		if (ret->data == NULL) {
			free(ret);
			ret = NULL;
		}
		else {
			for (size_t i = 0; i < ret->N; i++) {
				for (size_t j = 0; j < ret->M; j++) {
					el(ret, i, j) = el(mat, j, i);
				}
			}
		}

	}
	return ret;
}