#include "stringhe.h"

#include <string.h>

char* zfill(const char* str, size_t n)
{
	if (str == NULL)
		return NULL;

	size_t str_len = strlen(str), ret_len;
	char* ret;

	if (str_len < n)
	{
		ret_len = n + 1;

		ret = malloc(ret_len);

		size_t i = 0;

		for (; i < ret_len - str_len - 1; i++) {
			ret[i] = '0';
		}

		strcpy(ret + i, str);

	} else {
		ret_len = str_len + 1;

		ret = malloc(ret_len);

		strcpy(ret, str);

	}

	return ret;

}