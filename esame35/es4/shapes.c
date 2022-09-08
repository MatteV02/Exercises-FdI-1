#include "shapes.h"

bool rect_load(FILE* f, struct rect* r)
{
	if (f == NULL || r == NULL)
		return false;

	struct rect temp;
	int ret_fread;

	ret_fread = fread(&temp.x, 2, 1, f);

	if (ret_fread != 1)
		return false;

	fread(&temp.y, 2, 1, f);
	fread(&temp.width, 2, 1, f);
	fread(&temp.height, 2, 1, f);
	fread(&temp.symbol, 1, 1, f);

	*r = temp;

	return true;

}