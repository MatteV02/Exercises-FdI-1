#include "libri.h"
#include <stdio.h>
#include <string.h>

struct libro* read_libri(const char* filename, unsigned int* pn)
{
	if (pn == NULL)
		return NULL;
	if (filename == NULL) {
		*pn = 0;
		return NULL;
	}


	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		*pn = 0;
		return NULL;
	}

	struct libro* ret = NULL;
	unsigned int n_libri = 0;

	while (1) {
		struct libro temp;

		int ret_scan = fscanf(f, "%u;%[^;];%u\n", &temp.codice, temp.titolo, &temp.pagine);		
		
		if (ret_scan != 3)
			break;

		n_libri++;
		ret = realloc(ret, sizeof(struct libro) * n_libri);

		ret[n_libri - 1].codice = temp.codice;
		strcpy(ret[n_libri - 1].titolo, temp.titolo);
		ret[n_libri - 1].pagine = temp.pagine;

	}

	fclose(f);

	*pn = n_libri;
	return ret;

}