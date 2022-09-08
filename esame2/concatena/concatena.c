#include <stdlib.h>
#include <string.h>

char* concatena(const char* s1, const char* s2)
{
	if (s1 == NULL || s2 == NULL)
		return NULL;

	size_t l_1 = strlen(s1), l_2 = strlen(s2);
	size_t l_finale = l_1 + l_2 + 1;

	char* p = malloc(l_finale);
	if (p == NULL)
		return NULL;

	for (size_t i = 0; i < l_1; i++) {
		p[i] = s1[i];
	}

	for (size_t i = 0; i < l_2; i++) {
		p[i + l_1] = s2[i];
	}

	p[l_finale - 1] = 0;

	return p;
}