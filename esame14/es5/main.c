#include <stdlib.h>
#include <stdio.h>

extern void stampa_onde(FILE* f, int n);

int main(void)
{
	stampa_onde(stdout, 2);

	return 0;
}