#include <stdlib.h>

#include "alterna.h"

int main(void)
{
	char s1[] = "prova";
	char s2[] = "1234567";

	char* ret = alterna(s1, s2);

	free(ret);

	return 0;
}