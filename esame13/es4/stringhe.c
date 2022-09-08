#include "stringhe.h"

#include <string.h>
#include <stdio.h>

void stringhe_scrivi(const char* filename, const char** vs, size_t n)
{
	if (filename == NULL) {
		return;
	}

	FILE* f = fopen(filename, "wb");
	if (f == NULL)
		return;

	for (size_t i = 0; i < n; i++) {
		size_t ret_fwrite = fwrite(vs[i], strlen(vs[i]) + 1, 1, f);

		if (ret_fwrite != 1)
			return;
	}

	fclose(f);

}