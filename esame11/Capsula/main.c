#include <stdlib.h>
#include <stdio.h>

extern void capsula(FILE* f, unsigned char n);

int main(void)
{
	FILE* f = fopen("output.txt", "w");
	if (f == NULL)
		return 1;

	capsula(f, 10);

	if (f != NULL) {
		fclose(f);
	}

	return 0;
}