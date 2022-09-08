#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void stampa_riga(uint8_t ncols)
{
	fputc('+', stdout);

	for (size_t i = 0; i < ncols; i++) {
		printf("---------+");
	}
	fputc('\n', stdout);
}

void print_table(char** colnames, uint8_t ncols, uint8_t nrows)
{
	if (colnames == NULL || ncols == 0 || nrows == 0) {
		return;
	}

	fputc('|', stdout);

	for (uint8_t i = 0; i < ncols; i++) {
		printf("%-9s|", colnames[i]);
	}
	fputc('\n', stdout);

	stampa_riga(ncols);

	for (uint8_t i = 0; i < nrows; i++) {

		fputc('|', stdout);
		for (uint8_t j = 0; j < ncols; j++) {
			printf("         |");
		}
		fputc('\n', stdout);

		stampa_riga(ncols);
	}

}