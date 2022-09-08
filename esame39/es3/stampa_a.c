#include <stdint.h>
#include <stdio.h>

void stampa_a(uint8_t n)
{
	if (n % 2 == 0 || n < 3)
		return;
	
	for (uint8_t i = 0; i < n; i++) {
		for (uint8_t j = 0; j < n - 1 - i; j++) {
			fputc(' ', stdout);
		}

		fputc('/', stdout);

		for (uint8_t j = 0; j < 2 * i; j++) {
			if (i == n / 2) {
				fputc('-', stdout);
			}
			else {
				fputc(' ', stdout);
			}
		}

		fputc('\\', stdout);
		fputc('\n', stdout);

	}

}