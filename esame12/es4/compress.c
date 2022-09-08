#include "compress.h"

#include <stdio.h>
#include <stdint.h>

int dati_read(const char* filename, struct dati* d)
{
	if (filename == NULL || d == NULL)
		return 0;

	FILE* f = fopen(filename, "rb");
	if (f == NULL)
		return 0;

	struct dati* ret = d;
	ret->len = 0;
	ret->vals =	NULL;

	while (1) {
		int8_t type;

		size_t ret_fread = fread(&type, 1, 1, f);

		if (ret_fread != 1) {
			break;
		}

		if (type != 1 && type != 2 && type != 4)
			break;

		union input {
			int8_t byte1;
			int16_t byte2;
			int32_t byte4;
		} in;

		 ret_fread = fread(&in, type, 1, f);
		 if (ret_fread != 1) {
			 break;
		 }

		 ret->vals = realloc(ret->vals, sizeof(int) * (ret->len + 1));
		 ret->vals[ret->len] = 0;

		 switch (type) {
		 case 1:
			 ret->vals[ret->len] = (int)in.byte1;
			 break;
		 case 2:
			 ret->vals[ret->len] = (int)in.byte2;
			 break;
		 case 4:
			 ret->vals[ret->len] = (int)in.byte4;
		 }

		 ret->len++;

	}

	fclose(f);
	return 1;

}