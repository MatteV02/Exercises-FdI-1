#include <stdlib.h>

extern int* prodotto(const int* v, size_t n);

int main(void)
{
	int v[] = { 1,2,3,4,5 };

	int* ret = prodotto(v, sizeof(v)/sizeof(*v));

	free(ret);

	return 0;
}