#include <stdlib.h>
#include <stdbool.h>

char* rimuovi_singoli_spazi(const char* s)
{
	if (s == NULL)
		return NULL;

	char* ret = malloc(1);
	size_t ret_l = 1;
	bool aggiungi_spazi = false;

	for (size_t i = 0; s[i] != 0; i++) {

		if (s[i] == ' ') {
			if (aggiungi_spazi || s[i + 1] == ' ') {
				if (aggiungi_spazi == false)
					aggiungi_spazi = true;
				ret = realloc(ret, ret_l + 1);
				ret[ret_l - 1] = ' ';
				ret_l++;
			}
		}
		else {
			if (aggiungi_spazi)
				aggiungi_spazi = false;
			ret = realloc(ret, ret_l + 1);
			ret[ret_l - 1] = s[i];
			ret_l++;
		}

	}

	ret[ret_l - 1] = 0;

	return ret;

}