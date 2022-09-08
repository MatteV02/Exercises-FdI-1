#include <stdlib.h>
#include <stdio.h>

void stampa_cono(unsigned int h)
{
	if (h == 0) {
		fputs("_\n", stdout);
	}
	else {
		for (unsigned int i = 0; i <= h; i++) {
			fputc(' ', stdout);
		}

		fputc('_', stdout);
		fputc('\n', stdout);

		for (unsigned int i = 0; i < h; i++) {
			for (unsigned int j = 0; j < h - i; j++) {
				if (i == h - 1) {
					fputc('_', stdout);
				}
				else {
					fputc(' ', stdout);
				}
			}

			fputc('/', stdout);

			for (unsigned int j = 0; j < 1 + 2 * i; j++) {
				fputc(' ', stdout);
			}

			fputc('\\', stdout);

			if (i == h - 1) {
				fputc('_', stdout);
			}

			fputc('\n', stdout);
		}
	}
}