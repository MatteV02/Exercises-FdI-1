#include "punti_in_cerchio.h"

#include <math.h>

struct punto* punti_in_cerchio(const struct punto* p, size_t n, double r, size_t* count)
{
	struct punto* ret = NULL;
	if (count != NULL) {
		*count = 0;
		if (p != NULL && n != 0 && r >= 0) {
			for (size_t i = 0; i < n; i++) {
				
				if (pow(p[i].x, 2) + pow(p[i].y, 2) <= pow(r, 2)) {
					ret = realloc(ret, sizeof(struct punto) * (*count + 1));
					ret[*count] = p[i];
					*count = *count + 1;
				}

			}
		}
	}

	return ret;
}