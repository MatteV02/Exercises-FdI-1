#include "shapes.h"

bool line_load(FILE* f, struct line* pln)
{
	if (f == NULL || pln == NULL)
		return false;

	struct line temp;
	size_t ret_fread;

	ret_fread = fread(&temp.x1, 2, 1, f);
	if (ret_fread != 1)
		return false;

	ret_fread = fread(&temp.y1, 2, 1, f);
	if (ret_fread != 1)
		return false;

	ret_fread = fread(&temp.x2, 2, 1, f);
	if (ret_fread != 1)
		return false;

	ret_fread = fread(&temp.y2, 2, 1, f);
	if (ret_fread != 1)
		return false;

	ret_fread = fread(&temp.thickness, 1, 1, f);
	if (ret_fread != 1)
		return false;

	*pln = temp;
	return true;

}