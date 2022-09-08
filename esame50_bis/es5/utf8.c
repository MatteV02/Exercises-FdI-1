#include "utf8.h"

size_t utf8_encode(uint32_t codepoint, uint8_t seq[4])
{
	size_t ret = 0;
	if (seq != NULL && codepoint <= 0x10ffff) {
		if (codepoint <= 0x0080) {
			ret = 1;
			*seq = 0;
		}
		else if (codepoint <= 0x0800) {
			ret = 2;
			*seq = 0xC0;
		}
		else if (codepoint <= 0x10000) {
			ret = 3;
			*seq = 0xE0;
		}
		else {
			ret = 4;
			*seq = 0xF0;
		}

		for (size_t i = ret - 1; i > 0; i--) {
			seq[i] = 0x80;
			seq[i] += codepoint & 0x3F;
			codepoint >>= 6;
		}

		seq[0] += codepoint;

	}

	return ret;
}