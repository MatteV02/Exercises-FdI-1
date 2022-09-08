#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* trim(const char* s)
{
	if (s == NULL)
		return NULL;

	
	size_t start = 0;

	for (; s[start] != 0 && (s[start] == ' '); start++);

	size_t l = strlen(s) + 1 - start;
	char* out = malloc(l * sizeof(char));
	if (out == NULL)
		return NULL;

	size_t j; 
	for (j = 0; s[j+start] != 0; j++) {
		out[j] = s[j + start];

		if (out[j] == ' ') {
			bool continua = false;
			
			for (size_t i = j + start; s[i] != 0; i++) {
				if ((s[i] != ' ')&&(s[i] != 0)) {
					continua = true;
					break;
				}
			}
			if (continua == false)
				break;
		}

	}
	out[j] = 0;
	l = j+1;
	out = realloc(out, l);
	if (out == NULL)
		return NULL;

	return out;
}