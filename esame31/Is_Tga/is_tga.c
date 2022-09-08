#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "is_tga.h"

//TRUEVISION-XFILE.

bool is_tga(const char* filename)
{
	if (filename== NULL)
		return false;

	FILE* f = fopen(filename, "rb");
	if (f == NULL)
		return false;
	
	{
		int ret = fseek(f, -18, SEEK_END);
		if (ret) {
			fclose(f);
			return false;
		}
	}

	char* str = malloc(18);

	fread(str, 1, 18, f);

	bool ret;
	if (strcmp(str, "TRUEVISION-XFILE.") == 0)
	{
		ret = true;
	}
	else {
		ret = false;
	}

	free(str);

	fclose(f);

	return ret;
}
