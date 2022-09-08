#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

extern char* sostituisci(const char* str, const char* vecchia, const char* nuova);

int main(void)
{


	char* p = sostituisci("qui cambia la parola cambia e basta", "cambia", "sost");
	free(p);

	_CrtDumpMemoryLeaks();
	return 0;
}