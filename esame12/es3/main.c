#include <stdlib.h>
#include <stdio.h>

extern void croceromana(FILE* f, unsigned char n);

int main(void)
{

	croceromana(stdout, 10);

	return 0;
}