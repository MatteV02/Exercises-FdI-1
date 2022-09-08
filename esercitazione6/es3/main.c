#include <stdlib.h>

extern char* farfallino_decode(const char* s);

int main(void)
{
	char* ret = farfallino_decode("afaifiufuofolafa");

	if (ret != NULL)
		free(ret);

	return 0;
}