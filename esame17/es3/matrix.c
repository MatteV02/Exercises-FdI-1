#include "matrix.h"

#define el(m, i, j) (m)->data[(i) * (m)->N + (j)]

struct matrix* mat_replica(const struct matrix* a, int dir)
{
	struct matrix* ret = malloc(sizeof(struct matrix));
	if (dir == 0) {
		ret->M = a->M;
		ret->N = 2 * a->N;
	}
	else {
		ret->N = a->N;
		ret->M = 2 * a->M;
	}
	ret->data = malloc(sizeof(double) * ret->M * ret->N);

	for (size_t i = 0; i < ret->M; i++) {
		if (i < a->M) {
			for (size_t j = 0; j < ret->N; j++) {
				if (j < a->N) {
					el(ret, i, j) = el(a, i, j);
				}
				else {
					el(ret, i, j) = el(a, i, j - a->N);
				}
			}
		}
		else {
			for (size_t j = 0; j < ret->N; j++) {
				el(ret, i, j) = el(a, i - a->M, j);
			}
		}
	}

	return ret;
}