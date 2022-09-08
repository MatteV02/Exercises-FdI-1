#include <stdlib.h>
#include <stdio.h>
#include "dati.h"

struct dato* read_dati(const char* filename, unsigned int* pn)
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

int salva_conteggio_bin(const char* filename, struct dato* pdati, unsigned int n)
{
	if (filename == NULL || pdati == NULL) {
		return 1;
	}

	FILE* f = fopen(filename, "wb");
	if (f == NULL) {
		return 1;
	}

	unsigned int v[11] = { 0 };

	for (unsigned int i = 0; i < n; i++)
	{
		v[pdati[i].classe]++;
	}

	for (unsigned int i = 0; i < 11; i++)
	{
		if (fwrite(v + i, 4, 1, f) != 1) {
			fclose(f);
			return 1;
		}
	}

	fclose(f);
	return 0;
}