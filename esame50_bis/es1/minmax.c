#include <stdlib.h>

void minmax(const int* v, size_t n, int* min, int* max)
{
	if (v == NULL || n == 0 || min == NULL || max == NULL) {
		return;
	}
	else {
		*min = *max = v[0];

		for (size_t i = 1; i < n; i++) {
			if (v[i] < *min) {
				*min = v[i];
			}
			else if (v[i] > *max) {
				*max = v[i];
			}
		}
	}
	
}