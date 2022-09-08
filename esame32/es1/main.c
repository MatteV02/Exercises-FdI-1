#include <stdlib.h>
#include <stdio.h>

extern void stampa_tavola_pitagorica(FILE* f, unsigned int n);

int main(void)
{
	stampa_tavola_pitagorica(stdout, 10);
	return 0;
}