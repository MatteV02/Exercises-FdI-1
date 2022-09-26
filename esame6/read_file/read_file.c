#define _CRT_SECURE_NO_WARNINGS
#include "read_file.h"
#include <stdio.h>
byte* read_file(const char* szFileName, size_t* cb) {
	if (!szFileName)
		return NULL;
	FILE* f = fopen(szFileName, "rb");
	if (!f)
		return NULL;
	byte* b = malloc(1*sizeof(byte));
	byte* ret = malloc(1 * sizeof(int));
	*cb = 0;
	while (1) {
		size_t c = fread(b, sizeof(byte), 1, f);
		if (c != 1)
			break;
		ret[*cb] = *b;
		(*cb)++;
		ret = realloc(ret, (*cb + 1) * sizeof(byte));
	}
	fclose(f);
	free(b);
	ret = realloc(ret, (*cb) * sizeof(byte));
	return ret;
}