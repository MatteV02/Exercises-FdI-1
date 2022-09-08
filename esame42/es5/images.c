#include "images.h"

#include <stdio.h>
#include <string.h>

struct image* read_images(const char* filename, size_t* n)
{
	if (filename == NULL || n == NULL)
		return NULL;

	FILE* f = fopen(filename, "r");
	if (f == NULL)
		return NULL;

	struct image* ret = NULL;
	*n = 0;

	while (1) {

		char name_temp[255];
		unsigned int height_temp, width_temp;

		int ret_fscanf = fscanf(f, "%[^:]:%u:%u\n", name_temp, &height_temp, &width_temp);

		if (ret_fscanf != 3) {
			break;
		}

		ret = realloc(ret, sizeof(struct image) * (*n + 1));
		memset(ret + *n, 0, sizeof(struct image));

		strcpy(ret[*n].name, name_temp);
		ret[*n].height = height_temp;
		ret[*n].width = width_temp;

		(*n)++;

	}
	
	fclose(f);

	return ret;
}