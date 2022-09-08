#include <stdlib.h>
#include <stdbool.h>

bool cifre_duplicate(unsigned long long n)
{

	char* cifre = NULL;
	size_t cifre_len = 0;

	do {
		char temp = n % 10;

		for (size_t i = 0; i < cifre_len; i++) {
			if (cifre[i] == temp) {
				free(cifre);
				return true;
			}
		}

		cifre = realloc(cifre, sizeof(char) * (cifre_len + 1));

		cifre[cifre_len] = temp;

		cifre_len++;

	} while ((n /= 10) != 0);

	free(cifre);

	return false;

}
