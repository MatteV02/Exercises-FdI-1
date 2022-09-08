#include "read_dvec.h"

#include <stdio.h>
#include <stdint.h>

struct dvec* read_dvec_comp(const char* filename)
{
	struct dvec* ret = malloc(sizeof(struct dvec));
	ret->n = 0;
	ret->d = NULL;

	if (filename == NULL) {
		return ret;
	}

	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return ret;
	}

	while (1) {
		int16_t temp;
		size_t ret_fread = fread(&temp, 2, 1, f);

		if (ret_fread != 1)
			break;

		ret->d = realloc(ret->d, sizeof(double) * (ret->n + 1));

		ret->d[ret->n] = (double)temp / 0x4000;

		ret->n++;
	}

	fclose(f);
	return ret;
}