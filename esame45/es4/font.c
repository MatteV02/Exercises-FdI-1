#include <stdlib.h>
#include <string.h>

void cerca_e_sostituisci(char** s, const char* cerca, char sostituisci) 
{
	char* temp;

	do {

		temp = strstr(*s, cerca);
		if (temp == NULL)
			break;

		size_t cerca_len = strlen(cerca);
		if (cerca_len > 1) {
			size_t len = strlen(*s) + 1;
			memmove(temp + 1, temp + 3, strlen(temp + 3) + 1);
			*s = realloc(*s, len - 2);
		}

		*temp = sostituisci;

	} while (1);
	
}

char* change_font(const char* s)
{
	if (s == NULL)
		return NULL;

	char* ret = malloc(strlen(s) + 1);
	strcpy(ret, s);

	cerca_e_sostituisci(&ret, "SEI", '6');
	cerca_e_sostituisci(&ret, "PER", 'X');
	cerca_e_sostituisci(&ret, "A", '4');
	cerca_e_sostituisci(&ret, "E", '3');
	cerca_e_sostituisci(&ret, "I", '1');
	cerca_e_sostituisci(&ret, "O", '0');
	cerca_e_sostituisci(&ret, "S", '5');

	return ret;
}