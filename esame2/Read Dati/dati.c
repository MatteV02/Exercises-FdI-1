#include <stdlib.h>
#include <stdio.h>
#include "dati.h"

extern struct dato* read_dati(const char* filename, unsigned int* pn)
{
	if (filename == NULL || pn == NULL) {
		return NULL;
	}

	FILE* f = fopen(filename, "r");
	if (f == NULL)
		return NULL;

	struct dato* ret = NULL;
	unsigned int ret_l = 0;

	while (1) {
		struct dato tmp;
		
		int ret_scan = fscanf(f, "%le %ui", &tmp.valore, &tmp.classe);

		if (ret_scan <= 0)
			break;

		ret_l++;
		ret = realloc(ret, ret_l * sizeof(struct dato));
		if (ret == NULL) {
			return NULL;
		}

		ret[ret_l - 1].valore = tmp.valore;
		ret[ret_l - 1].classe = tmp.classe;

	}

	*pn = ret_l;
	fclose(f);
	return ret;
}