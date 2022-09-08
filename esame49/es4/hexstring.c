#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

void hexstring2vec(const char* s, uint8_t out[8])
{
	if (out == NULL)
		return;

	char str[17] = {
		'0', '0', '0', '0', '0', '0', '0', '0',
		'0', '0', '0', '0', '0', '0', '0', '0', 
		0
	};
	
	strncpy(str, s, strlen(s));

	sscanf(str, "%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx%2hhx",
		out, out + 1, out + 2, out + 3, out + 4, 
		out + 5, out + 6, out + 7);

	return;
}