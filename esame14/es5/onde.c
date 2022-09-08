#include <stdlib.h>
#include <stdio.h>

void stampa_onde(FILE* f, int n)
{
	if (f == NULL || n < 0)
		return;

	for (int i = 0; i < n; i++) {
		fprintf(f, " _    ");
	}
	fputc('\n', f);

	for (int i = 0; i < n; i++) {
		fprintf(f, "/ \\   ");
	}
	fputc('\n', f);

	for (int i = 0; i < n; i++) {
		fprintf(f, "   \\_/");
	}
	fputc('\n', f);

}