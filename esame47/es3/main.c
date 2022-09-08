#include <stdlib.h>

extern char* hangman(const char* frase, const char* lettere);

int main(void)
{
	char* ret = hangman("Il gioco dell'impiccato non e' case-sensitive", "aeiou");

	free(ret);
	return 0;
}