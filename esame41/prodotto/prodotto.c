#include <stdlib.h>

int prodotto_altri_due(const int* v, size_t n)
{
	if (v == NULL || n == 0)
		return -1;

	int ret = 0;

	int salta = 0;

	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < n; j++) {
			if (j != i && salta == 0) {
				for (size_t z = 0; z < n; z++) {
					if (z != i && z != j && salta == 0) {
						if (v[i] == v[j] * v[z]) {
							ret++;
							salta = 1;
						}
					}
				}
			}
		}

		salta = 0;
	}

	return ret;

}