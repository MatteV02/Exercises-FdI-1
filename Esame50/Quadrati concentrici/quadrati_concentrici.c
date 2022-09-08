#include <stdio.h>

void stampa_quadrati_concentrici(int n) 
{
	if (n < 0) {
		return;
	}

	for (int i = 0; i < n; i++) {
		int j;
		for (j = 0; j < n; j++) {
			if (j <= i) {
				fputc((n - j) % 10 + '0', stdout);
				fputc(' ', stdout);
			}
			else {
				fputc((n - i) % 10 + '0', stdout);
				fputc(' ', stdout);
			}
		}
		
		for (j = 0; j < n - 1; j++) {
			if (j >= n - 1 - i) {
				fputc((j+2) % 10 + '0', stdout);
				if (j != n - 2) {
					fputc(' ', stdout);
				}
			}
			else {
				fputc((n - i) % 10 + '0', stdout);
				fputc(' ', stdout);
			}
		}

		fputc('\n', stdout);
 	}

	for (int i = n - 2; i >= 0; i--) {
		int j;
		for (j = 0; j < n; j++) {
			if (j <= i) {
				fputc((n - j) % 10 + '0', stdout);
				fputc(' ', stdout);
			}
			else {
				fputc((n - i) % 10 + '0', stdout);
				fputc(' ', stdout);
			}
		}

		for (j = 0; j < n - 1; j++) {
			if (j >= n - 1 - i) {
				fputc((j + 2) % 10 + '0', stdout);
				if (j != n - 2) {
					fputc(' ', stdout);
				}
			}
			else {
				fputc((n - i) % 10 + '0', stdout);
				fputc(' ', stdout);
			}
		}

		fputc('\n', stdout);
	}
}