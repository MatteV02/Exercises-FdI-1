#include <stdlib.h>

extern int* crea_inizializza(unsigned int n, int val);

int main(void)
{
	int* ret = crea_inizializza(5, 3);

	free(ret);

	return 0;
}