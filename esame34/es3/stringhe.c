#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char* parola_piu_lunga(const char* sz)
{
	if (sz == NULL)
		return NULL;

	char* ret = (char*)sz, *attuale = ret;
	size_t l_max = 0, attuale_l;
	bool nuova_parola = true;

	for (size_t i = 0; sz[i] != 0; i++) {

		switch (sz[i]) {
		case ' ': case '\t': case '\n':
			nuova_parola = true;
			break;
		default:
			if (nuova_parola) {
				attuale = (char*)sz + i;
				attuale_l = 1;
				nuova_parola = false;
			}
			else {
				attuale_l++;
				if (attuale_l > l_max) {
					l_max = attuale_l;
					if (attuale != ret) {
						ret = attuale;
					}
				}
			}

			
		}

	}

	char* ret_str = calloc(l_max + 1, 1);
	strncpy(ret_str, ret, l_max);

	return ret_str;
}

