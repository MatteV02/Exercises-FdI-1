#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool e_presente(const char* lettere, char c) {
	
	while (*lettere != 0) {
		if (c == *lettere || c == toupper(*lettere)) {
			return true;
		}
		
		lettere++;
	}

	return false;
}

char* hangman(const char* frase, const char* lettere)
{
	if (frase == NULL || lettere == NULL)
		return NULL;

	size_t ret_l = strlen(frase);
	char* ret = malloc(ret_l + 1);
	ret[ret_l] = 0;

	for (size_t i = 0; i < ret_l; i++) {
		if (isalpha(frase[i]) && !e_presente(lettere, frase[i])) {
			ret[i] = '*';
		}
		else {
			ret[i] = frase[i];
		}
	}

	return ret;
}
