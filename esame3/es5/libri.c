#include "libri.h"

#include <string.h>

struct libro* filtra_libri(struct libro* plibri, unsigned int* pn, const char* cerca)
{
	if (plibri == NULL || pn == NULL || cerca == NULL) {
		return NULL;
	}

	struct libro* ret = NULL;
	unsigned int ret_l = 0;

	for (unsigned int i = 0; i < *pn; i++) {
		char* p = strstr(plibri[i].titolo, cerca);
		if (p != NULL) {
			ret = realloc(ret, (ret_l + 1) * sizeof(struct libro));
			ret[ret_l].codice = plibri[i].codice;
			strcpy(ret[ret_l].titolo, plibri[i].titolo);
			ret[ret_l].pagine = plibri[i].pagine;

			ret_l++;
		}
	}

	*pn = ret_l;

	return ret;

}