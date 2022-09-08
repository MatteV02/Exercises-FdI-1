#include <stdlib.h>

extern char* trim(const char* s);

int main() 
{
	char* s = trim("prova  ");

	free(s);

	return 0;
}