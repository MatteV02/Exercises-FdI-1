#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

uint8_t massimo(uint8_t* h, size_t n) {
	uint8_t ret = *h;

	for (size_t i = 1; i < n; i++) {
		if (h[i] > ret) {
			ret = h[i];
		}
	}

	return ret;
}

void stampa_linea(uint8_t* h, size_t n, uint8_t i, FILE* fout) {
	for (size_t j = 0; j < n; j++) {
		if (h[j] >= i) {
			fputc('|', fout);
		}
		else {
			fputc(' ', fout);
		}
	}

	fputc('\n', fout);
}

void disegna(uint8_t* h, size_t n, FILE* fout)
{
	if (fout != NULL) {
		uint8_t max = massimo(h, n);

		for (uint8_t i = max; i > 0; i--) {
			stampa_linea(h, n, i, fout);
		}
	}
}
