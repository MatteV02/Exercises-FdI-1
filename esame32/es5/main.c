#include <stdlib.h>

#include "stringhe.h"

int main(void)
{
	char* ret = center(NULL, 2, '.');

	free(ret);
	return 0;
}