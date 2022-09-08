#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

void stampa_prima_riga(uint8_t w) {
	printf("/-\\");
	for (uint8_t i = 1; i < w; i++) {
		printf("|/-\\");
	}

	putchar('\n');
}

void stampa_ultima_riga(uint8_t w) {
	printf("\\-/");
	for (uint8_t i = 1; i < w; i++) {
		printf("|\\-/");
	}

	putchar('\n');
}

void cornice(uint8_t h, uint8_t w)
{
	if (h != 0 && w != 0)
	{
		stampa_prima_riga(w);

		for (uint8_t i = 0; i < h; i++) {
			if (i == 0) {
				putchar('|');
				for (uint8_t j = 0; j < 3 * w + w - 3; j++) {
					putchar(' ');
				}
				putchar('|');
				putchar('\n');
			}
			else {
				putchar('\\');
				for (uint8_t j = 0; j < 3 * w + w - 3; j++) {
					putchar(' ');
				}
				putchar('\\');
				putchar('\n');

				putchar('-');
				for (uint8_t j = 0; j < 3 * w + w - 3; j++) {
					putchar(' ');
				}
				putchar('-');
				putchar('\n');

				putchar('/');
				for (uint8_t j = 0; j < 3 * w + w - 3; j++) {
					putchar(' ');
				}
				putchar('/');
				putchar('\n');

				putchar('|');
				for (uint8_t j = 0; j < 3 * w + w - 3; j++) {
					putchar(' ');
				}
				putchar('|');
				putchar('\n');
			}
		}

		stampa_ultima_riga(w);
	}

}