#include "stringhe.h"

int main(void)
{
	char* ret = zfill("ciao", 2);

	free(ret);

	return 0;
}