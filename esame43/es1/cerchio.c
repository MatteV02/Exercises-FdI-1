#include "cerchio.h"

#include <math.h>

bool nel_cerchio(const struct punto* p, const struct cerchio* c)
{

	if (p == NULL || c == NULL)
		return false;

	if (pow(p->x - c->x, 2) + pow(p->y - c->y, 2) <= pow(c->r, 2)) {
		return true;
	}
	else {
		return false;
	}

}
