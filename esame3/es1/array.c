#include <stdlib.h>

int* crea_inizializza(unsigned int n, int val)
{
	int* ret = malloc(n * sizeof(int));
	if (ret == NULL)
		return NULL;

	for (unsigned int i = 0; i < n; i++) {
		ret[i] = val;
		val--;
	}

	return ret;
}