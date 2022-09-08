#include "quadrati.h"
#include <stdio.h>

void stampa_quadrato(unsigned int lato)
{
	for (unsigned int i = 0; i < lato; i++) {
		for (unsigned int j = 0; j < lato; j++) {
			if (i == 0 || i == lato - 1 || j == 0 || j == lato - 1) {
				fputc('*', stdout);
			}
			else {
				fputc(' ', stdout);
			}
		}
		if (i != lato - 1) {
			fputc('\n', stdout);
		}
	}
}