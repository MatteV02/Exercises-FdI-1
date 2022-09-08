#include <stdlib.h>

unsigned int conta_spazi(const char* s) {
	if (s == NULL)
		return 0u;

	unsigned int spazi = 0;
	for (size_t i = 0; s[i] != 0; i++) {
		if (s[i] == ' ')
			spazi++;
	}

	return spazi;
}