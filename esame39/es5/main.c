#include <stdlib.h>

extern char* somma_stringhe(const char* a, const char* b);

int main(void)
{
	char* ret = somma_stringhe("60000000", "60000000");

	if (ret != NULL)
		free(ret);

	return 0;
}