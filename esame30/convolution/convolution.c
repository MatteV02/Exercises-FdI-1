#include <stdlib.h>

int* convolution3(const int* v, size_t lenv, const int k[3]) {
	if (v == NULL || k == NULL) {
		return NULL;
	}

	if (lenv == 0)
		return NULL;

	int* padded = calloc(lenv + 2, 4);

	for (size_t i = 1; i < lenv + 1; i++) {
		padded[i] = v[i - 1];
	}

	int* ret = calloc(lenv, 4);

	for (size_t i = 0; i < lenv; i++) {
		for (size_t m = 0; m <= 2; m++) {
			ret[i] += padded[i + 2 - m] * k[m];
		}
	}

	free(padded);

	return ret;
}