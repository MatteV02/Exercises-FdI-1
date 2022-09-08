#include <stdlib.h>
#include <stdint.h>
#include <string.h>

uint8_t* nonogram_row(const char* s, size_t* n)
{
	if (s == NULL)
		return NULL;

	size_t s_l = strlen(s) + 1;
	char* temp;
	char* s_copy = malloc(s_l);
	char* s_p = s_copy;
	strcpy(s_copy, s);
	uint8_t* ret = NULL;
	*n = 0;

	while ((temp = strtok(s_p, " "))!= 0) {
		
		if(s_p != NULL)
			s_p = NULL;

		ret = realloc(ret, *n + 1);

		ret[*n] = (uint8_t)strlen(temp);

		(*n)++;
	}

	free(s_copy);

	return ret;

}