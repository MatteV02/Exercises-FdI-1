#include <stdio.h>
#include <stdint.h>

#include "stringhe.h"

struct stringa* read_stringhe_bin(const char* filename, unsigned int* pn)
{
	if (filename == NULL || pn == NULL)
		return NULL;

	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	struct stringa* ret = NULL;
	unsigned int ret_l = 0;

	while (1) {
		uint8_t length_temp;

		size_t ret_fread = fread(&length_temp, 1, 1, f);

		if (ret_fread != 1)
			break;

		char* s_temp = malloc(length_temp+1);

		ret_fread = fread(s_temp, 1, length_temp, f);

		if ((uint8_t)ret_fread != length_temp) {
			free(s_temp);
			break;
		}

		s_temp[length_temp] = 0;

		ret = realloc(ret, sizeof(struct stringa) * (ret_l + 1));

		ret[ret_l].length = length_temp;
		ret[ret_l].s = s_temp;

		ret_l++;

	}

	fclose(f);

	*pn = ret_l;
	return ret;

}