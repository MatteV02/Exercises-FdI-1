#include <stdlib.h>
#include <stdbool.h>

size_t conta_parole(const char* s)
{
	if (s == NULL)
		return 0;

	bool nuova_parola = true;
	size_t ret = 0;

	for (size_t i = 0; s[i] != 0; i++) {
		if (s[i] == ' ') {
			nuova_parola = true;
		}
		else if (nuova_parola) {
			ret++;
			nuova_parola = false;
		}
	}

	return ret;

}