#include "utf8.h"

size_t utf8_encode(uint32_t codepoint, uint8_t seq[4])
{
	if (seq != NULL) {
		if (codepoint < 0x0080) {
			seq[0] = codepoint;

			return 1;
		}
		else if (codepoint < 0x0800) {
			seq[1] = 0x80 + (codepoint & 0x3f);
			codepoint >>= 6;
			
			seq[0] = 0xC0 + codepoint;

			return 2;
		}
		else if (codepoint < 0x10000) {
			seq[2] = 0x80 + (codepoint & 0x3f);
			codepoint >>= 6;

			seq[1] = 0x80 + (codepoint & 0x3f);
			codepoint >>= 6;

			seq[0] = 0xE0 + codepoint;

			return 3;
		}
		else if (codepoint < 0x110000) {
			seq[3] = 0x80 + (codepoint & 0x3f);
			codepoint >>= 6;

			seq[2] = 0x80 + (codepoint & 0x3f);
			codepoint >>= 6;

			seq[1] = 0x80 + (codepoint & 0x3f);
			codepoint >>= 6;

			seq[0] = 0xF0 + codepoint;

			return 4;
		}
	}
	
	return 0;


}