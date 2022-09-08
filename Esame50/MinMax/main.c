#include <stdlib.h>

extern void minmax(const int* v, size_t n, int* min, int* max);

int main(void)
{
	int v[] = { 1,1,1,1,2,0 }, min, max;

	minmax(v, sizeof(v) / sizeof(int), &min, &max);

	return 0;
}