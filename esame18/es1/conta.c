#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

unsigned int contalettere(const char* nomefile)
{
	if (nomefile == NULL)
		return 0;

	FILE* f = fopen(nomefile, "r");
	if (f == NULL)
		return 0;

	unsigned int ret = 0;

	while (1)
	{
		int temp = fgetc(f);

		if (temp < 0)
			break;

		if (isalpha(temp)) {
			ret++;
		}
	}

	fclose(f);
	return ret;
}