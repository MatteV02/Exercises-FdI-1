#include "utf8.h"

size_t utf8_encode(uint32_t codepoint, uint8_t seq[4])
{
	if (seq == NULL || codepoint > 0x10FFFF) {
		return 0u;
	}

	if (codepoint < 0x0080) {
		// 1 byte
		seq[0] = codepoint;
		return 1;
	}
	else if (codepoint >= 0x0080 && codepoint < 0x0800) {
		// 2 byte
		
		seq[0] = 0xc0; 
		seq[1] = 0x80;

		seq[1] += codepoint & 0x3F;
		codepoint >>= 6;
		seq[0] += codepoint;

		return 2;
	}
	else if (codepoint >= 0x0800 && codepoint < 0x10000) {
		// 3 byte

		seq[0] = 0xe0;
		seq[1] = 0x80;
		seq[2] = 0x80;

		seq[2] += codepoint & 0x3F;
		codepoint >>= 6;

		seq[1] += codepoint & 0x3F;
		codepoint >>= 6;

		seq[0] += codepoint;

		return 3;
	}
	else {
		// 4 byte

		seq[0] = 0xf0;
		seq[1] = 0x80;
		seq[2] = 0x80;
		seq[3] = 0x80;

		seq[3] += codepoint & 0x3F;
		codepoint >>= 6;

		seq[2] += codepoint & 0x3F;
		codepoint >>= 6;

		seq[1] += codepoint & 0x3F;
		codepoint >>= 6;

		seq[0] += codepoint;

		return 4;
	}

}