#include "rectangle.h"

int find_largest(const struct rect* r, size_t n)
{
	if (r == NULL || n == 0)
		return -1;

	int area_max = 0, ret = 0;

	for (size_t i = 0; i < n; i++) {
		int area_attuale = abs((r[i].a.x - r[i].b.x) * (r[i].a.y - r[i].b.y));

		if (area_attuale > area_max) {
			ret = (int)i;
			area_max = area_attuale;
		}

	}

	return ret;
}