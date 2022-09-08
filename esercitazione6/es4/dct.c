#include <stdlib.h>
#include <math.h>

double alpha_u(size_t u, size_t N) {
	if (u == 0) {
		return sqrt(1. / N);
	}
	else {
		return sqrt(2. / N);
	}
}

void dct(const double* in, double* out, size_t N)
{
	if (in == NULL || out == NULL)
		return;

	for (size_t u = 0; u < N; u++) {
		out[u] = 0;
		for (size_t x = 0; x < N; x++) {
			out[u] += in[x] * cos(((2 * x + 1) * u * 3.141592653589793238) / (2 * N));
		}

		out[u] *= alpha_u(u, N);
	}

}