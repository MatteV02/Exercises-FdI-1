#include "stringhe.h"

#include <string.h>

char* spacefill(const char* str, size_t n)
{
	if (str == NULL)
		return NULL;

	char* ret = NULL;
	size_t str_l = strlen(str);

	if (n <= str_l) {
		ret = malloc(str_l + 1);
		strcpy(ret, str);
	}
	else {
		ret = malloc(n + 1);

		size_t i;
		for (i = 0; i < n - str_l; i++) {
			ret[i] = ' ';
		}

		strcpy(ret + i, str);
	}

	return ret;

}