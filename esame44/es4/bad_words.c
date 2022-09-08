#include <stdlib.h>
#include <string.h>

void bad_word_filter(char* s, char** words, size_t nwords)
{
	if (s == NULL || words == NULL || nwords == 0)
		return;

	for (size_t i = 0; i < nwords; i++) {
		
		char* da_cancellare;

		while ((da_cancellare = strstr(s, words[i])) != NULL)
		{
			size_t len = strlen(words[i]);

			if (len == 0)
				break;

			for (size_t i = 0; i < len; i++) {
				da_cancellare[i] = '*';
			}

		}

	}

}