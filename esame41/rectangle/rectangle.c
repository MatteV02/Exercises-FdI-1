#include "rectangle.h"

bool rect_load(FILE* f, struct rect* r)
{
	if (f == NULL)
		return false;

	if (fread(&r->a.x, 4, 1, f) != 1) {
		return false;
	}

	if (fread(&r->a.y, 4, 1, f) != 1) {
		return false;
	}

	if (fread(&r->b.x, 4, 1, f) != 1) {
		return false;
	}

	if (fread(&r->b.y, 4, 1, f) != 1) {
		return false;
	}

	return true;
}