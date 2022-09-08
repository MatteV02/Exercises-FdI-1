#include "rapporti.h"

#include <stdio.h>

struct rapporto* leggi_rapporti(const char* filename, uint16_t* n)
{
	if (n == NULL)
		return NULL;
	if (filename == NULL) {
		*n = 0;
		return NULL;
	}

	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		*n = 0;
		return NULL;
	}

	uint16_t n_rapporti;
	size_t ret_fread;

	ret_fread = fread(&n_rapporti, 2, 1, f);
	if (ret_fread != 1 || n_rapporti == 0) {
		fclose(f);
		*n = 0;
		return NULL;
	}

	struct rapporto* ret = malloc(sizeof(struct rapporto) * n_rapporti);

	for (size_t i = 0; i < n_rapporti; i++) {
		ret_fread = fread(&ret[i].id, 2, 1, f);
		if (ret_fread != 1) {
			free(ret);
			fclose(f);
			*n = 0;
			return NULL;
		}

		ret_fread = fread(&ret[i].tipo, 1, 1, f);
		if (ret_fread != 1) {
			free(ret);
			fclose(f);
			*n = 0;
			return NULL;
		}

		ret_fread = fread(&ret[i].valore, 4, 1, f);
		if (ret_fread != 1) {
			free(ret);
			fclose(f);
			*n = 0;
			return NULL;
		}

	}

	fclose(f);
	*n = n_rapporti;
	return ret;

}