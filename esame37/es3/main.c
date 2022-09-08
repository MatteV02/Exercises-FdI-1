#include <stdlib.h>

extern char* serpentino_encode(const char* s);

int main(void)
{
	char* ret = serpentino_encode("ciao come stai");

	if (ret != NULL)
		free(ret);

	return 0;
}