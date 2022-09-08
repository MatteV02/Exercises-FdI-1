#include <stdlib.h>
extern char* concatena(const char* s1, const char* s2);

int main(void)
{
	char* p = concatena("prova", "test");

	free(p);
	return 0;
}