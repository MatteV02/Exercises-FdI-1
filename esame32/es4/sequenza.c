#include "sequenza.h"

#include <stdio.h>

extern bool seq_load(const char* filename, struct seq* s)
{
	if (filename == NULL || s == NULL) {
		return false;
	}

	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return false;
	}

	s->len = 0;
	s->values = NULL;

	while (1) {
		uint16_t temp;

		size_t ret_fread = fread(&temp, 2, 1, f);

		if (ret_fread != 1)
			break;

		s->values = realloc(s->values, sizeof(int16_t) * (s->len + 1));

		s->values[s->len] = temp;

		s->len++;
	}

	fclose(f);
	return true;
}