#include <stdlib.h>

char* cerca_primo(char* s, const char* list)
{
	while (*s != 0) {
		for (size_t j = 0; list[j] != 0; j++) {
			if (*s == list[j]) {
				return s;
			}
		}

		s++;
	}

	return NULL;
}