#include <stdlib.h>
#include <stdio.h>

void croceromana(FILE* f, unsigned char n)
{
	if (f == NULL || n == 0)
		return;

	for (unsigned char i = 0; i < n; i++) {
		for (unsigned char j = 0; j < 2 * n; j++) {
			fputc(' ', f);
		}
		fputc('|', f);
		fputc('\n', f);
	}

	for (unsigned char i = 0; i < 4*n+1; i++) {
		if (i == 2 * n) {
			fputc('+', f);
		}
		else {
			fputc('-', f);
		}
	}

	fputc('\n', f);

	for (unsigned char i = 0; i < 2*n; i++) {
		for (unsigned char j = 0; j < 2 * n; j++) {
			fputc(' ', f);
		}
		fputc('|', f);
		fputc('\n', f);
	}

}