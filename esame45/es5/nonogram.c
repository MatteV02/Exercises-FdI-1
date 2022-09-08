#include "nonogram.h"

#include <stdio.h>

bool nonogram_load(struct nonogram* ng, const char* filename)
{
	if (filename == NULL)
		return false;

	FILE* f = fopen(filename, "r");
	if (f == NULL)
		return false;

	int ret_input = fscanf(f, "%lu%*1c", &ng->n);
	if (ret_input != 1) {
		fclose(f);
		return false;
	}

	ng->schema = malloc(ng->n * ng->n);

	for (size_t i = 0; i < ng->n * ng->n; i++)
	{
		ret_input = fgetc(f);
		if (ret_input == 10) {
			i--;
			continue;
		}
		if (ret_input < 0) {
			free(ng->schema);
			fclose(f);
			return false;
		}

		ng->schema[i] = ret_input;
	}

	fclose(f);
	return true;

}