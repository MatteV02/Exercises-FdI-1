#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

extern unsigned int count_teenagers(FILE* f);

int main(void)
{
	FILE* f = fopen("people3.txt", "r");

	unsigned int r = count_teenagers(f);
	
	if (f != NULL) {
		fclose(f);
	}
	return EXIT_SUCCESS;
}