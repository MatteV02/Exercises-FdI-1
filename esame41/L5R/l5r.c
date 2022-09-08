#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

bool giapresente(size_t j, size_t* p, size_t l) {
	for (size_t i = 0; i < l; i++) {
		if (p[i] == j)
			return 1;
	}
	return 0;
}

int roll_and_keep(const int* r, size_t x, size_t y)
{
	if (r == NULL || x == 0 || y == 0 || y > x)
		return 0;

	size_t* p = malloc(y * sizeof(size_t));
	if (p == NULL)
		return 0;
	memset(p, 0, y * sizeof(size_t));
	size_t p_l = 0;

	for (size_t i = 0; i < y; i++) {
		
		int max = INT32_MIN;

		for (size_t j = 0; j < x; j++) {
			if (!giapresente(j, p, p_l)) {
				if (r[j] > max) {
					max = r[j];
					p[i] = j;
				}
			}
		}

		p_l++;
	}

	int ret = 0;

	for (size_t i = 0; i < y; i++) {
		ret += r[p[i]];
	}

	free(p);

	return ret;
}