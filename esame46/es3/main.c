#include <stdlib.h>

extern char* rimuovi_singoli_spazi(const char* s);

int main(void)
{
	char* ret = rimuovi_singoli_spazi("  a  b  c  ");

	free(ret);

	return 0;
}