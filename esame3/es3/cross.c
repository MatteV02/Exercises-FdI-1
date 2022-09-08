#include <stdlib.h>
#include <stdio.h>

void stampa_cross(unsigned int n)
{
	if (n == 0) {
		fputc('x', stdout);
		fputc('\n', stdout);
		return;
	}
	else if (n == 1) {
		printf("\\ /\n");
		printf(" x\n");
		printf("/ \\\n");
		return;
	}

	for (unsigned int i = 0; i < n - 1; i++) {
		for (unsigned int j = 0; j < i; j++) {
			fputc(' ', stdout);
		}
		fputc('\\', stdout);
		for (unsigned int j = 0; j < (n-2 - i)*2 + 1; j++) {
			fputc(' ', stdout);
		}
		fputc('/', stdout);
		fputc('\n', stdout);
	}

	

	for (unsigned int i = 0; i < n - 1; i++) {
		fputc(' ', stdout);
	}

	fputc('x', stdout);
	fputc('\n', stdout);

	if (n >= 2) {
		unsigned int i = n - 1;
		do {
			i--;
			for (unsigned int j = 0; j < i; j++) {
				fputc(' ', stdout);
			}

			fputc('/', stdout);
			
			for (unsigned int j = 0; j < (n - 2 - i) * 2 + 1; j++) {
				fputc(' ', stdout);
			}

			fputc('\\', stdout);
			
			fputc('\n', stdout);
			
		} while (i != 0);
	}
}