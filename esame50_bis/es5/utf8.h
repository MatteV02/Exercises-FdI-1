#if !defined UTF8_H
#define UTF8_H

#include <stdlib.h>
#include <stdint.h>

extern size_t utf8_encode(uint32_t codepoint, uint8_t seq[4]);

#endif // !defined UTF8_H
