#include <stdlib.h>
#include <math.h>

double entropia(const double* v, size_t n)
{
	double ret = 0;
	 
	if (v != NULL && n != 0) {
		for (size_t i = 0; i < n; i++) {
			if (v[i] != 0)
				ret += v[i] * log2(v[i]);
		}
 	}

	return -ret;
}