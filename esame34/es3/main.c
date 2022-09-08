#include <stdlib.h>

extern char* parola_piu_lunga(const char* sz);

int main(void)
{
	char* p = parola_piu_lunga("Ciao, comeeeeee stai?");
	
	free(p);
	return 0;
}