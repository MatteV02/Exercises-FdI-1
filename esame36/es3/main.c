#include "stringhe.h"

int main(void)
{
	char* ret = spacefill("ciao", 10);

	free(ret);
	return 0;
}