#include <stdlib.h>
#include <math.h>

double entropia(const double* v, size_t n) {
	if (v == NULL || n == 0) {
		return 0.;
	}

	double r = 0;

	for (size_t i = 0; i < n; i++) {
		if (v[i] != 0) {
			r += v[i] * log2(v[i]);
		}
	}

	r = -r;

	return r;
}