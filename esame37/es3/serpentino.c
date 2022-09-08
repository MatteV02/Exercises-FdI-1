#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool is_vowel(char c) {
	switch (c) {
	case 'a': case 'e': case 'i': case 'o': case 'u':
		return true;
	default:
		return false;
	}
}

char* serpentino_encode(const char* s)
{
	if (s == NULL)
		return NULL;

	size_t ret_l = strlen(s) + 1;
	char* ret = malloc(ret_l);
	if (ret == NULL)
		return NULL;

	strcpy(ret, s);

	for (size_t i = 0; i < ret_l - 1; i++) {
		if (is_vowel(ret[i])) {
			ret = realloc(ret, ret_l + 2);
			if (ret == NULL)
				return NULL;

			memmove(ret + i + 2, ret + i, ret_l - i);

			ret_l += 2;

			char temp = ret[i];
			ret[++i] = 's';
			ret[++i] = temp;

		}
	}

	return (ret);

}