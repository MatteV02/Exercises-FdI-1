#include "stringhe.h"

#include <string.h>
#include <stdbool.h>

char* center(const char* str, size_t n, char c)
{
	if (str == NULL)
		return NULL;

	size_t str_l = strlen(str);
	char* ret = NULL;
	size_t ret_l= 0;

	if (n <= str_l) {
		ret_l = str_l + 1;
		ret = calloc(ret_l, 1);
		strcpy(ret, str);
	}
	else {
		ret_l = n + 1;
		ret = calloc(ret_l, 1);

		bool str_pari, n_pari;
		if (str_l % 2 == 0) {
			str_pari = true;
		}
		else {
			str_pari = false;
		}

		if (n % 2 == 0) {
			n_pari = true;
		}
		else {
			n_pari = false;
		}

		if ((n_pari && str_pari) || (n_pari == false && str_pari == false)) {
			for (size_t i = 0; i < (n - str_l) / 2; i++) {
				ret[i] = c;
			}

			strcpy(ret + (n - str_l) / 2, str);

			for (size_t i = 0; i < (n - str_l) / 2; i++) {
				ret[i + (n - str_l) / 2 + str_l] = c;
			}
		}
		else if (n_pari && str_pari == false) {
			for (size_t i = 0; i < (n - str_l) / 2; i++) {
				ret[i] = c;
			}

			strcpy(ret + (n - str_l) / 2, str);

			for (size_t i = 0; i < (n - str_l) / 2 + 1; i++) {
				ret[i + (n - str_l) / 2 + str_l] = c;
			}
		}
		else {
			for (size_t i = 0; i < (n - str_l) / 2 + 1; i++) {
				ret[i] = c;
			}

			strcpy(ret + (n - str_l) / 2 + 1, str);

			for (size_t i = 0; i < (n - str_l) / 2; i++) {
				ret[i + (n - str_l) / 2 + str_l + 1] = c;
			}
		}

	}

	return ret;
}