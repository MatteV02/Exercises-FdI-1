#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isvowel(char c) {
	switch (c) {
	case 'a': case 'A':
	case 'e': case 'E':
	case 'i': case 'I':
	case 'o': case 'O':
	case 'u': case 'U':
		return true;
	default:
		return false;
	}
}

char* farfallino_encode(const char* s)
{
	if (s == NULL)
		return NULL;

	size_t ret_l = strlen(s) + 1;
	char* ret = malloc(ret_l);
	strcpy(ret, s);

	for (size_t i = 0; ret[i] != 0; i++) {
		if (isvowel(ret[i])) {
			ret_l += 2;
			ret = realloc(ret, ret_l);

			memmove(ret + i + 2, ret + i, strlen(ret + i) + 1);
			ret[i + 1] = 'f';

			i +=2;
		}
	}

	return ret;

}