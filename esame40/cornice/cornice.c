#include <stdint.h>
#include <stdio.h>

void cornice(uint8_t h, uint8_t w)
{
	if (h == 0 || w == 0)
		return;

	for (uint8_t i = 0; i < w; i++) {
		printf("/-\\");
		if (i != w - 1) {
			fputc('|', stdout);
		}
		else {
			fputc('\n', stdout);
		}
	}

	for (uint8_t i = 0; i < h; i++) {
		fputc('|', stdout);

		for (uint8_t j = 0; j < w * 4 - 3; j++) {
			fputc(' ', stdout);
		}

		printf("|\n");

		if (i == h - 1) {
			break;
		}

		fputc('\\', stdout);

		for (uint8_t j = 0; j < w * 4 - 3; j++) {
			fputc(' ', stdout);
		}

		printf("\\\n");


		fputc('-', stdout);

		for (uint8_t j = 0; j < w * 4 - 3; j++) {
			fputc(' ', stdout);
		}

		printf("-\n");

		fputc('/', stdout);

		for (uint8_t j = 0; j < w * 4 - 3; j++) {
			fputc(' ', stdout);
		}

		printf("/\n");

	}

	for (uint8_t i = 0; i < w; i++) {
		printf("\\-/");
		if (i != w - 1) {
			fputc('|', stdout);
		}
	}
}