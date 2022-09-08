#include <stdlib.h>

extern char* farfallino_encode(const char* s);

int main(void)
{
	char* ret = farfallino_encode("ciao");

	free(ret);

	return 0;
}