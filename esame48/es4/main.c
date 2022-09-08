#include "utf8.h"

int main(void)
{
	uint32_t codepoint = 0x20ac;
	uint8_t seq[4];

	size_t ret = utf8_encode(codepoint, seq);

	return 0;
}