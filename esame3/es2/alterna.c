#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "alterna.h"

char* alterna(const char* s1, const char* s2)
{
	if (s1 == NULL || s2 == NULL)
		return NULL;

	size_t s1_l = strlen(s1);
	size_t s2_l = strlen(s2);
	size_t ret_l = s1_l + s2_l + 1;

	/*if (s1_l >= s2_l) {
		ret_l = s1_l * 2 + 1;
	}
	else {
		ret_l = s2_l * 2 + 1;
	}*/

	char* ret = calloc(ret_l, 1);

	for (size_t i = 0, j = UINT64_MAX; i < ret_l - 1; i++) {
		if (i / 2 >= s1_l) {
			if (j == UINT64_MAX) {
				j = i / 2;
			}
			ret[i] = s2[j];
			j++;
		} else if (i / 2 >= s2_l) {
			if (j == UINT64_MAX) {
				j = i / 2;
			}
			ret[i] = s1[j];
			j++;
		}
		else {

			if (i % 2 == 0) {
				ret[i] = s1[i / 2];
			}
			else {
				ret[i] = s2[i / 2];
			}
		}
	}

	return ret;

}
