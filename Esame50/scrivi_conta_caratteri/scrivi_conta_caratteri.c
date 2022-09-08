#include <stdlib.h>
#include <stdio.h>

int scrivi_conta_caratteri(FILE* f, const char* s)
{
	if (f == NULL || s == NULL)
		return 0;

	if (fprintf(f, "%s\n", s) <= 0)
		return 0;

	size_t i;
	for (i = 0; s[i] != 0; i++) {
		fputc((i + 1) % 10 + '0', f);
	}

	fputc('\n', f);

	return i;

}