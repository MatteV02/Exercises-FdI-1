#include "scacchiera.h"

#include <stdlib.h>
#include <stdio.h>

void stampa_riga(void)
{
	fputc('+', stdout);
	for (char i = 0; i < 8; i++) {
		printf("---+");
	}
	fputc('\n', stdout);
}

void stampa_scacchiera(const struct scacchiera* sc)
{
	if (sc == NULL)
		return;

	stampa_riga();

	for (char i = 7; i >= 0; i--) {
		fputc('|', stdout);
		for (char j = 0; j < 8; j++) {
			printf(" %c |", sc->caselle[j * 8 + i]);
		}
		fputc('\n', stdout);

		stampa_riga();
	}

}