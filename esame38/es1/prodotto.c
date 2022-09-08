#include <stdlib.h>
#include <string.h>

int* prodotto(const int* v, size_t n)
{
	if (v == NULL || n == 0 || n == 1) {
		return NULL;
	}

	int* ret = malloc(sizeof(int) * n);

	for (size_t i = 0; i < n; i++) {
		ret[i] = 1;

		for (size_t j = 0; j < n; j++) {
			if (j != i) {
				ret[i] *= v[j];
			}
		}
	}

	return ret;
}