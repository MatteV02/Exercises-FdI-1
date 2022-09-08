#include "utf8.h"

int main(void)
{
	uint8_t seq[4];
	uint32_t codepoint = 0x0010ffff;
	
	size_t ret = utf8_encode(codepoint, seq);

	return 0;
}