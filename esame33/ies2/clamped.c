#include <stdlib.h>

int* clamped(const int* v, size_t n, int min, int max)
{
	if (v == NULL || n == 0 || min > max)
		return NULL;

	int* ret = malloc(sizeof(int) * n);

	for (size_t i = 0; i < n; i++) {
		if (v[i] < min) {
			ret[i] = min;
		}
		else if (v[i] > max) {
			ret[i] = max;
		}
		else {
			ret[i] = v[i];
		}
	}

	return ret;

}

