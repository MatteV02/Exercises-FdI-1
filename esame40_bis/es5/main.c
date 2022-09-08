#include <stdlib.h>

extern char* sottrai_stringhe(const char* a, const char* b);

int main(void)
{
	char* ret = sottrai_stringhe("100000", "1");

	if (ret != NULL)
		free(ret);

	return 0;
}