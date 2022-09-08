#include "utf8.h"

int main(void)
{
	uint8_t seq[4];
	size_t r = utf8_encode(0x0010ffff, seq);

	return 0;
}