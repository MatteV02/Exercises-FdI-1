#include <stdint.h>
#include <stdlib.h>

extern void hexstring2vec(const char* s, uint8_t out[8]);

int main(void)
{
	uint8_t out[8];

	hexstring2vec("", out);

	return 0;
}