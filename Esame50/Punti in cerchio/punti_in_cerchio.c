#include "punti_in_cerchio.h"
#include <math.h>

struct punto* punti_in_cerchio(const struct punto* p, size_t n, double r, size_t* count)
{
	if (p == NULL || count == NULL || n == 0 || r <= 0) {
		*count = 0;
		return NULL;
	}

	struct punto* ret = NULL;
	size_t dim_ret = 0;

	for (size_t i = 0; i < n; i++) {
		if (pow(p[i].x, 2) + pow(p[i].y, 2) <= pow(r, 2)) {
			++dim_ret;
			ret = realloc(ret, dim_ret * sizeof(struct punto));
			if (ret == NULL) {
				*count = 0;
				return NULL;
			}
			ret[dim_ret - 1].x = p[i].x;
			ret[dim_ret - 1].y = p[i].y;
		}
	}

	*count = dim_ret;
	return ret;
}