#include "bytearray.h"

uint8_t* absdiff(const uint8_t* a, const uint8_t* b, size_t n)
{
	if (a == NULL || b == NULL || n == 0)
		return NULL;

	uint8_t* ret = malloc(n);
	
	for (size_t i = 0; i < n; i++) {
		ret[i] = abs(a[i] - b[i]);
	}

	return ret;

}