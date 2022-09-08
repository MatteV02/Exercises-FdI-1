#include <stdlib.h>
#include <stdio.h>

void capsula(FILE* f, unsigned char n)
{
	if (f == NULL || n == 0)
		return;

	for (unsigned char i = 0; i < n; i++) {
		if (fputc(' ', f) < 0)
			return;
	}
	for (unsigned char i = 0; i < n; i++) {
		fputc('_', f);
	}

	fputc('\n', f);

	for (unsigned char i = 1; i <= n; i++) {
		for (unsigned char j = 0; j < n - i; j++) {
			fputc(' ', f);
		}
		fputc('/', f);
		for (unsigned char j = 0; j < n + 2 * (i - 1); j++) {
			fputc(' ', f);
		}
		fputc('\\', f);
		fputc('\n', f);
	}

	for (unsigned char i = 1; i <= n; i++) {
		fputc('|', f);
		for (unsigned char j = 0; j < n + 2 * (n - 1); j++) {
			fputc(' ', f);
		}
		fputc('|', f);
		fputc('\n', f);
	}

	for (unsigned char i = n; i > 0; i--) {
		for (unsigned char j = 0; j < n-i; j++) {
			fputc(' ', f);
		}

		fputc('\\', f);

		for (unsigned char j = 0; j < n + 2 * (i - 1); j++) {
			if (i != 1) {
				fputc(' ', f);
			}
			else {
				fputc('_', f);
			}
		}

		fputc('/', f);
		fputc('\n', f);

	}

}

