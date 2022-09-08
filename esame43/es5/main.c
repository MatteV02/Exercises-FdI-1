#include <stdlib.h>

extern char* decodifica_morse(const char* codice);

int main(void)
{
	
	char* ret = decodifica_morse("_._. .. ._ ___ / __ ._ __ __ ._");

	return 0;
}