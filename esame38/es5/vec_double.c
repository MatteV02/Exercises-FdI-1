#include "vec_double.h"

#include <stdio.h>

struct vec_double* read_vec_double(const char* filename)
{
	if (filename == NULL)
		return NULL;

	FILE* f = fopen(filename, "rb");
	if (f == NULL)
		return NULL;

	struct vec_double* ret = malloc(sizeof(struct vec_double));
	if (ret == NULL) {
		fclose(f);
		return NULL;
	}

	size_t ret_fread = fread(&ret->size, 4, 1, f);
	if (ret_fread != 1) {
		free(ret);
		fclose(f);
		f = NULL;
		ret = NULL;
	}
	else {

		ret->data = malloc(sizeof(double) * ret->size);
		if (ret->data == NULL) {
			free(ret);
			fclose(f);
			f = NULL;
			ret = NULL;
		}

		ret_fread = fread(ret->data, sizeof(double), ret->size, f);
		if (ret_fread != ret->size) {
			free(ret->data);
			free(ret);
			fclose(f);
			f = NULL;
			ret = NULL;
		}

	}

	if (f != NULL)
		fclose(f);
	return ret;

}