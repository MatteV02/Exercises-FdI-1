#include <stdlib.h>

extern char* unici(const char* s);

int main(void)
{
	char* ret = unici("ciao casa");

	free(ret);

	return 0;
}