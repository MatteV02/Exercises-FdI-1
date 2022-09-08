//#define _CRTDBG_MAP_ALLOC
//#include <crtdbg.h>
#include <stdlib.h>
#include <string.h>

char* sostituisci(const char* str, const char* vecchia, const char* nuova)
{
	if (str == NULL || vecchia == NULL || nuova == NULL) {
		return NULL;
	}

	size_t str_l = strlen(str) + 1;
	size_t word_l = strlen(vecchia);
	size_t new_l = strlen(nuova);
	char* ret = malloc(str_l);
	if (ret == NULL)
		return NULL;
	strcpy(ret, str);
	
	if (strcmp(vecchia, "") != 0) {
		char* pos = ret;
		while ((pos = strstr(pos, vecchia)) != NULL) {
			long long delta = new_l - word_l;

			str_l += delta;
			if (delta > 0) {
				size_t temp = pos - ret;
				ret = realloc(ret, str_l);
				pos = ret + temp;
			}

			memmove(pos + word_l + delta, pos + word_l, strlen(pos + word_l) + 1);

			if (delta < 0) {
				size_t temp = pos - ret;
				ret = realloc(ret, str_l);
				pos = ret + temp;
			}

			strncpy(pos, nuova, new_l);

			pos += word_l + delta;
		}
	}

	/*if (strcmp(vecchia, "") != 0) {
		char* pos = ret;
		while ((pos = strstr(pos, vecchia)) != NULL) {

			for (size_t i = 0; i < new_l; i++) {
				if (i >= word_l) {
					ret = realloc(ret, ++str_l);
					memmove(pos + i + 1, pos + i, strlen(pos + i) + 1);
				}
				pos[i] = nuova[i];
			}
		}
	}*/

	return ret;

}