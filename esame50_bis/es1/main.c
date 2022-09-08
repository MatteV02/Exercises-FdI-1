#include <stdlib.h>

extern void minmax(const int* v, size_t n, int* min, int* max);

int main(void)
{
	int v[] = { 2,1,3,4,5 };
	size_t n = 5;
	int min, max;

	minmax(v, n, &min, &max);

	return 0;
}