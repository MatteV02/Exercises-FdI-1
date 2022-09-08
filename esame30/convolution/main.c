#include <stdlib.h>

extern int* convolution3(const int* v, size_t lenv, const int k[3]);

int main(void)
{
	int v[] = { 1, 2, 3, 4, 3, 2, 1 }, k[] = { 2, -1, 1 };

	int* p = convolution3(v, sizeof(v) / sizeof(int), k);

	if (p != NULL)
		free(p);
	
	return 0;
}