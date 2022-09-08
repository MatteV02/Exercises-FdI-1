#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

size_t contanumeri(const char* nomefile)
{
	if (nomefile == NULL)
		return 0;

	FILE* f = fopen(nomefile, "rt");
	if (f == NULL)
		return 0;

	size_t ret = 0;

	while (1)
	{
		int temp = fgetc(f);

		if (temp < 0)
			break;

		if (isdigit(temp)) {
			ret++;
		}

	}

	fclose(f);

	return ret;

}