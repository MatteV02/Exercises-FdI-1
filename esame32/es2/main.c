#include <stdlib.h>

extern unsigned int* tartaglia(unsigned int* v, size_t n);

int main(void)
{
	unsigned int v[] = { 1 };
	unsigned int* ret = tartaglia(NULL, 0);  //v, sizeof(v) / sizeof(unsigned int));

	free(ret);
	return 0;
}