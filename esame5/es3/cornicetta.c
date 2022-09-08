#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void stampa_cornicetta(const char* s)
{
	size_t s_l;
	if (s == NULL)
		s_l = 0;
	else
		s_l = strlen(s);

	printf("/-");
	for (size_t i = 0; i < s_l; i++) {
		fputc('-', stdout);
	}
	printf("-\\\n");

	printf("|-%s-|\n", s);

	printf("\\-");
	for (size_t i = 0; i < s_l; i++) {
		fputc('-', stdout);
	}
	printf("-/\n");

}