#include "WTK.h"

size_t write_points(FILE* f, const struct point* p, size_t n)
{
	if (f == NULL || p == NULL)
		return 0;

	size_t ret = 0;

	for (size_t i = 0; i < n; i++) {
		int ret_fprintf = fprintf(f, "POINT(%g %g)\n", p[i].x, p[i].y);

		if (ret_fprintf < 0)
			break;

		ret++;
	}

	return ret;
}