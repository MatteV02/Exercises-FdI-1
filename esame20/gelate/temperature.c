#include <stdlib.h>

size_t gelate(const char* a, size_t n) 
{
	if (a == NULL)
		return 0;

	size_t n_gelate = 0;
	for (size_t i = 0; i < n - 1; i++) {
		if (a[i] > 0 && a[i] * a[i + 1] <= 0) {
			n_gelate++;
		}
	}

	return n_gelate;
}