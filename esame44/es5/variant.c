#include "variant.h"

void* read_variant(FILE* f, char* type)
{
	if (f == NULL || type == NULL)
		return NULL;

	char temp;
	int ret_fread = fread(&temp, 1, 1, f);

	if (ret_fread != 1)
		return NULL;

	size_t ret_l;

	switch (temp) {
	case 'c':
		ret_l = 1;
		break;
	case 's':
		ret_l = 2;
		break;
	case 'i':
		ret_l = 4;
		break;
	case 'l':
		ret_l = 8;
		break;
	case 'f':
		ret_l = 4;
		break;
	case 'd':
		ret_l = 8;
		break;
	default:
		return NULL;
	}

	void* ret = malloc(ret_l);

	ret_fread = fread(ret, ret_l, 1, f);

	if (ret_fread != 1) {
		free(ret);
		return NULL;
	}

	*type = temp;
	return ret;

}