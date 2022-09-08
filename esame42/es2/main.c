#include <stdlib.h>

extern char* codifica_morse(const char* testo);

int main(void)
{

	char* ret = codifica_morse("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG");

	free(ret);
	return 0;
}