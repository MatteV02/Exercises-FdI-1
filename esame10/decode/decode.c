#include "decode.h"
#include <stdlib.h>
#include <ctype.h>

void decode(FILE* f)
{
	if (f == NULL) {
		return;
	}


	while (1) {
		int t;
		char c;

		t = getc(f);
		if (t < 0) {
			break;
		}

		c = t;
		if (isdigit(c)) {
			char repeat = c - '0';
			c = getc(f);
			while (repeat > 0) {
				fputc(c, stdout);
				repeat--;
			}
		}
		else {
			fputc(c, stdout);
		}

	}
}