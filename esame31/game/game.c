#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void stampa_linea(FILE *f)
{
	for (size_t z1 = 0; z1 < 4; z1++) {
		fputc('+', f);
		for (size_t z2 = 0; z2 < 4; z2++) {
			fputc('-', f);
		}
	}
	fprintf(f, "+\n");
}

void numtoa(unsigned short elem, char* str) {
	size_t i = 3;
	do {
		str[i] = elem % 10 + '0';
		i--;
	} while ((elem /= 10) != 0);
}

void print_board(FILE* f, const unsigned short board[4][4])
{
	if (f == NULL || board == NULL)
		return;

	for (size_t i = 0; i < 4; i++) {

		stampa_linea(f);

		for (size_t z1 = 0; z1 < 4; z1++) {
			unsigned short elem = board[i][z1];
			fputc('|', f);
			char* str = malloc(5);
			memset(str, ' ', 4);
			str[4] = 0;

			if (elem != 0) {
				numtoa(elem, str);
			}

			fprintf(f, "%s", str);

			free(str);
		}

		fprintf(f, "|\n");

	}

	stampa_linea(f);
	
}