#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

extern void disegna(uint8_t* h, size_t n, FILE* fout);

int main(void)
{
	uint8_t h[] = { 5,0,5,0,1,10 };

	disegna(h, sizeof(h) / sizeof(*h), stdout);

	return 0;
}