#include <stdlib.h>

extern size_t conta_parole(const char* s);

int main(void)
{
	size_t ret = conta_parole("Ciao, come stai? ");

	return 0;
}