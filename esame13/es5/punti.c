#include "punti.h"

struct pixel* read_pixels(FILE* f, size_t* n)
{
	if (f == NULL || n == NULL)
		return NULL;

	struct pixel* ret = NULL;
	size_t ret_l = 0;

	while (1) {
		struct pixel temp;
		size_t ret_fread;

		ret_fread = fread(&temp.x, 2, 1, f);

		if (ret_fread != 1)
			break;

		ret_fread = fread(&temp.y, 2, 1, f);

		if (ret_fread != 1)
			break;
		
		ret_fread = fread(temp.rgb, 3, 1, f);

		if (ret_fread != 1)
			break;

		ret = realloc(ret, sizeof(struct pixel) * (ret_l + 1));

		ret[ret_l].x = temp.x;
		ret[ret_l].x = temp.x;
		for (size_t i = 0; i < 3; i++) {
			ret[ret_l].rgb[i] = temp.rgb[i];
		}

		ret_l++;

	}

	*n = ret_l;
	return ret;

}