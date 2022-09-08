#include "read_dvec.h"

#include <stdint.h>
#include <stdio.h>

struct dvec* read_dvec_comp(const char* filename)
{
	struct dvec* ret = malloc(sizeof(struct dvec));
	ret->d = NULL;
	ret->n = 0;
	FILE* f = NULL;

	if (filename != NULL) {
		f = fopen(filename, "rb");
		if (f != NULL) {
			while (1) {
				int16_t temp;
				size_t ret_fread = fread(&temp, 2, 1, f);

				if (ret_fread == 0)
					break;

				ret->d = realloc(ret->d, (ret->n + 1) * sizeof(double));
				ret->d[ret->n] = (double)temp / 0x4000;
				ret->n++;

			}

			fclose(f);
		}
	}


	return ret;

}