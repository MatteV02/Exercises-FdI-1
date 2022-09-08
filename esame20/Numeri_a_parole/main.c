#include <stdlib.h>
#include <stdio.h>

extern void a_parole_1_999(char* sz, unsigned int i);

int main(void)
{
	char* sz = malloc(100);
	
	a_parole_1_999(sz, 100);

	for (unsigned int i = 0; i <= 999; ++i) {
		a_parole_1_999(sz, i);
		printf("%s\n", sz);
	}

	free(sz);
	return 0;
}