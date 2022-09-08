#include "is_gif.h"

bool is_gif(const char* filename) {
	if (filename == NULL)
		return false;

	FILE* f = fopen(filename, "r");
	if (f == NULL)
		return false;

	char s[7];
	size_t ret = fscanf(f, "%[GIF87a]", s);

	fclose(f);
	if (ret != 1)
		return false;
	else
		return true;

}