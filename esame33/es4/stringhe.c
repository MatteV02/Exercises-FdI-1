#include "stringhe.h"

#include <stdbool.h>
#include <string.h>
#include <ctype.h>

char* title(const char* str)
{
	if (str == NULL)
		return NULL;

	size_t ret_l = strlen(str) + 1;
	char* ret = malloc(ret_l);
	if (ret == NULL)
		return NULL;

	bool nuova_parola = true;

	for (size_t i = 0; i < ret_l - 1; i++) {
		bool is_whitespace = isspace(str[i]);

		if (is_whitespace) {
			nuova_parola = true;
		}

		if (nuova_parola && is_whitespace == false) {
			ret[i] = toupper(str[i]);
			nuova_parola = false;
		}
		else {
			ret[i] = str[i];
		}
	}

	ret[ret_l - 1] = 0;

	return ret;

}